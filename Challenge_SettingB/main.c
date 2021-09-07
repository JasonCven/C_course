#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero,checabit;
    while(1){
        printf("Introduce un número aleatorio\n");
        scanf("%d",&numero);
        printf("Introduce bit a checar (0-31)\n");
        scanf("%d",&checabit);
        ((numero>>checabit)&1 == 1) ? printf("El bit %d, está en 1\n",checabit) : \
                                        printf("El bit %d, está en 0\n",checabit);
        printf("Número antes de modificarlo: %d\n",numero);
        numero^=(1<<checabit);
        printf("Número después de modificarlo: %d\n",numero);
    }

    return 0;
}

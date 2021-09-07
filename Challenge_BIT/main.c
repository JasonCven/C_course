#include <stdio.h>
#include <stdlib.h>

#define mask 0x8000

int main()
{
    unsigned int numero,bit;
    printf("Introduce el número!\n");
    scanf("%d",&numero);
    printf("Introduce el número a checar (Izquierda-Derecha)");
    scanf("%d",&bit);

    if((numero&(mask>>(bit)))==(mask>>bit)){
        printf("El bit %d, está en 1",bit);
        printf("\t Número antes de cambiar: %d\n",numero);
        printf("\t Número ya cambiado:%d\n",numero&(~(mask>>(bit))));
    }else{
        printf("El bit %d, está en 0\n",bit);
        printf("\t Número antes de cambiar: %d\n",numero);
        printf("\t Número ya cambiado:%d\n",numero|(mask>>(bit)));
    }



    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int suma(unsigned int cantidad,unsigned int arr[cantidad]){
    unsigned int sumatotal=0;
    for(unsigned int i=0;i<cantidad;i++){
        sumatotal+=arr[i];
    }
    return sumatotal;
}

int main()
{
    unsigned int cantidad,cantida;
    printf("Introducir número de datos\n");
    scanf("%d",&cantidad);
    unsigned int arr[cantidad];
    printf("Introducir datos\n");
    for(unsigned int i=0;i<cantidad;i++){
        scanf("%d",&cantida);
        arr[i]=cantida;
    }

    printf("La suma total es %d",suma(cantidad,arr));

    return 0;
}

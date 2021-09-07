#include <stdio.h>
#include <stdlib.h>
#include <math.h>


unsigned int calcular_binario(unsigned int *num_ptr){
    unsigned int calculo,j=0,restante;
    static unsigned int decimal=0;
    while(*num_ptr>=pow(2,j)){
        j++;
    }
    decimal+=pow(10,j-1);
    restante=(*num_ptr)-pow(2,j-1);
    if(restante>0){
        calcular_binario(&restante);
    }else{
    }
    return decimal;
}


unsigned int calcular_decimal(unsigned long long *num_ptr){
    unsigned int calculo,decimal;
    while(*num_ptr>=1){
        static j=0;
        calculo=*num_ptr%2;
        if((calculo)==0){


        }else{
            decimal+=pow(2,j);
        }
        j=j+1;
        *num_ptr/=10;
    }
    return decimal;
}

int main()
{
    unsigned long long numero=0;

    printf("Transformar\n\t 1)Número binario-decimal\n\t 2)Número decimal-binario\n");
    scanf("%d",&numero);

    if(numero==1){
        printf("Introducir número binario\n");
        scanf("%d",&numero);
        printf("el numero es: %d\n",calcular_decimal(&numero));
    }else{
        printf("Introducir número decimal\n");
        scanf("%d",&numero);
        printf("el numero es: %d\n",calcular_binario(&numero));
    }
    return 0;
}

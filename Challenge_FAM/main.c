#include <stdio.h>
#include <stdlib.h>

struct s{
    int arraySize;
    int array[];
};

int suma(struct s *ptr){
    unsigned int sumatotal=0;

    for(unsigned int i=0;i<(ptr->arraySize);i++){
        sumatotal+=ptr->array[i];
    }
    return sumatotal;
}

int main()
{
    unsigned int cantidad,cantida;
    struct s *ptr;

    printf("Introducir número de datos\n");
    scanf("%d",&cantidad);
    ptr = malloc(sizeof( struct s ) + cantidad * sizeof( int ) );
    ptr->arraySize=cantidad;
    printf("Introducir datos\n");
    for(unsigned int i=0;i<cantidad;i++){
        scanf("%d",&cantida);
        ptr->array[i]=cantida;
    }

    printf("La suma total es %d",suma(ptr));

    return 0;
}

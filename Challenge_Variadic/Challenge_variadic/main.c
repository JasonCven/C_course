#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

unsigned int sumatoria(unsigned int total,...){
    va_list parg;
    int count = 1;
    int valor=0;
    va_start(parg,total);

    while(count<=11){
        valor+=va_arg(parg,int);
        count++;
    }
    va_end(parg);
    return valor;
}

int main()
{
    printf("%d",sumatoria(10,1,2,3,4,5,6,7,8,9,10));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

typedef struct {
    unsigned int num;
    char letramay;
    char letramin;
    char *buffer;
}DATOS;

void *thread(void *arg){
    DATOS *datos_locales = (DATOS *)arg;
    printf("El número es:%d, el primer caracter:%c y el segundo:%c\n El mensaje es:%s",datos_locales->num,datos_locales->letramay,datos_locales->letramin,datos_locales->buffer);
}

int main()
{
    pthread_t tid;
    DATOS datos_locales;
    datos_locales.buffer = malloc(sizeof(char)*255);
    datos_locales.letramay = 'H';
    datos_locales.letramin = 'h';
    datos_locales.num = 150;
    datos_locales.buffer= "Hola a todos\n";

    int ret=pthread_create(&tid,NULL,thread,(void *) &datos_locales);
    printf("Tarea creada!\n");
    pthread_join(&tid,NULL);
    return 0;
}

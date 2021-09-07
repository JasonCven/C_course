#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum colors{black,red,green,yellow,blue,magenta,cyan,white};
enum bordes{solid,dotted,dashed};
char * colores[8]={"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};
char * borderstyles[3]={"solid","dotted","dashed"};
struct box{
    bool opacity:1;
    unsigned int color:3;
    unsigned int reserved :4;
    bool border:1;
    unsigned int bordercolor:3;
    unsigned int borderstyle:2;

};

print(const struct box *structuraimp){

    printf("Valores de inicialización originales:\n");
    (structuraimp->opacity==1) ? printf("\tOpacidad: SI\n") : printf("\tOpacidad: NO\n");
    printf("\tColor: %s\n",colores[structuraimp->color]);
    (structuraimp->border==1) ? printf("\tBorde: SI\n") : printf("\tBorde: NO\n");
    printf("\tColor del borde: %s\n",colores[structuraimp->bordercolor]);
    printf("\tTipo del borde: %s\n",borderstyles[structuraimp->borderstyle]);

}

int main()
{
    enum colors color,bordercolor;
    enum bordes borde;
    borde=solid;
    color=cyan;
    bordercolor=red;
    struct box box1={0,color,0,bordercolor,borde};
    print(&box1);

    return 0;
}

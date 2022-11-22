#include <stdio.h>

int main(){
int dulce,agria;
scanf("%d %d ",&dulce,&agria);

if(dulce+agria==13){
    printf("No hablar de nuevo");
} else {
    if(dulce<agria){
        printf("Rezagado");
    }else if(dulce>agria){
        printf("A la convencion");
    }else if(dulce==agria){
        printf("Indecisos");
    }
}
return 0;
}

#include <stdio.h>

int main(){
    //CODIGO AQUI
    //Definir a,b Como Entero
    int a=1,b=2,c;
    a=10;
    b=5;
    printf("Ingresa 2 números");
    scanf("%d %d",&a,&b);
    //c<-a+b
    c=a+b;
    //Escribir "El resultado es",c
    //Incluir un salto de linea \n
    printf("El resultado de la suma de \n%d + %d es %d\n",a,b,c);
    printf("El resultado es %d",c);
    return 0;
}

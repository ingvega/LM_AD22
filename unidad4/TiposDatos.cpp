#include <stdio.h>
int main(){
    char respuesta;
    short edad;
    int sueldo;
    unsigned int sueldo2;
    long poblacion;
    float promedio;
    double calculo;
/*
    printf("Ingresa un caracter, despu�s tu edad, despu�s tu sueldo , \nen seguida coloca un sueldo m�s grande, \nluego tu promedio y finalmente un n�mero con muchos decimales\n");

    scanf("%c %d %d %d %d %f %lf",
          &respuesta,&edad,&sueldo,&sueldo2,
          &poblacion,&promedio,&calculo);

    printf("\nLos datos son \nRespuesta %c \nEdad %d  \nSueldo %d  \nSueldo2 %d \nPoblacion %d  \nPromedio %f \nCalculo %f",
          respuesta,edad,sueldo,sueldo2,
          poblacion,promedio,calculo);*/
    printf("Deseas continuar? S/N");
    scanf("%c",&respuesta);
    printf("La respuesta es %c",respuesta);

    printf("Deseas continuar? S/N");
    scanf("%c%c",&respuesta);
    printf("La respuesta es %c",respuesta);

    return 0;
}

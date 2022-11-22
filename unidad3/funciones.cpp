#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    //double r=6.5;
    scanf("%f",&x);
    y=((x+pow(x,2))/(5*x+3)+x)*
    (((x+pow(x,2))/(5*x+3))/(((x+pow(x,2))/(5*x+3))+2*x));
    //Imprimir a dos decimales
    //Este formato de decimales ocasiona el redondeo
    //de los decilames
    //%.CuantosDecimalesf
    printf("%.2f",y);
    printf("\n%.1f",y); //Esto redondea a 1.0 probando
    //con un
    //printf("%f",y);





    return 0;
}

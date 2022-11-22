/*//Entrada
consumo
//Salidas
Pago

Rangos
    1-75 $0.877
    76-125 $1.067
    125> $3.115
Pago mínimo de 50
*/
#include <stdio.h>
int main (){
    int consumo;
    double tarifa;
    double pago;
    scanf ("%d", &consumo);
    if(consumo>=1 && consumo<=75){
        tarifa=0.877;
    }
    if(consumo>=76&& consumo<=125){
        tarifa=1.067;
    }
    if(consumo>125){
        tarifa=3.115;
    }
   pago= consumo*tarifa
    if(pago < 50){
        printf("50");

    }
    else{
        printf("%f", pago);
    }
return 0;


}

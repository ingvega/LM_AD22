#include <stdio.h>
#include <math.h>
//floor redondeo hacia abajo entero inferior
//ceil redondeo hacia arriba entero superior
//round redondeo de 0.5 hacia arriba al entero superior
//de lo contrario al entero inferior

int main(){
    int x1,x2,y1,y2;
    double d;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(d>=150){
        printf("sana");
    }else{
        printf("insana");
    }
    return 0;
}

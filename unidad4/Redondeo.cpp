#include <stdio.h>

int main(){
    int entero;
    double v,r,dif;
    scanf("%lf",&v); //3.28
    if(v<0.5){
        printf("0.5");
        return 0;
    }
    entero=v;//3
    dif=v-entero;//0.28

    //hasta antes de 50c redondear hacia abajo
    if(dif<0.5){
        r=entero;
        //printf("%d.0",entero);
    }else if(dif<0.8){
        r=entero+0.5;
    }else{
        r=entero+1;
    }
    /*if(r==0){
        printf("0.5");
    }else{*/
        printf("%.1f",r);
    //}

    return 0;
}

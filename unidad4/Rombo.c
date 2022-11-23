#include <stdio.h>

int main(){
    int n,espaciosIniciales,espaciosIntermedios;
    scanf("%d",&n);
    espaciosIniciales=n/2;
    espaciosIntermedios=-1;
    //Cuantas líneas va a imprimir
    int mitad=(n/2)+1;
    for(int i=1;i<=mitad;i++){
        //Para cada línea
        //Imprimir espacios iniciales
        for(int j=1;j<=espaciosIniciales;j++){
            printf(" ");
        }
        printf("#");
        //Imprimir espacios intermedios
        for(int j=1;j<=espaciosIntermedios;j++){
            printf(" ");
        }
        if(i>1){
            printf("#");
        }
        printf("\n");
        espaciosIniciales--;
        espaciosIntermedios+=2;

    }

    return 0;
}

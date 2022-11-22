#include <stdio.h>

int main(){
        int n;
        scanf("%d",&n);
        if(n%2==0){ //7%2  3 sobra 1
            n++;
        }
        int numAsteriscos=n*2-1,numGuiones=0;
        //Que controle la impresión de todas las líneas
        for(int i=1;i<=n;i++){
            //Imprimir guiones
            for(int j=1;j<=numGuiones;j++){
                printf("-");
            }
            //Imprimir *
            for(int j=1;j<=numAsteriscos;j++){
                printf("*");
            }
            for(int j=1;j<=numGuiones;j++){
                printf("-");
            }
            printf("\n");
            numAsteriscos-=2; //numAsteriscos=numAsteriscos-2;
            numGuiones++;
        }
    return 0;
}

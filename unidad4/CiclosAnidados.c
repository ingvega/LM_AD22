#include <stdio.h>

int main(){
    int n=0;
    while(n%2==0){
        scanf("%d",&n);
    }



    /*xxxxx
    xxxxx
    xx*xx
    xxxxx
    xxxxx*/
    int mitad=n/2+1;
    //printf("%d",mitad);
    //Escribir n líneas
    for(int i=1;i<=n;i++){
        //Escribir una línea
        //Escriba n veces x
        for(int j=1;j<=n;j++){
                if(i==mitad && j==mitad){
                    printf("*");
                }else{
                    printf("x");
                }
            //printf("%d,%d  ",i,j);
        }
        printf("\n");
    }
    return 0;
}

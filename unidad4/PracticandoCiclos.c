#include<stdio.h>
int main(){

    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);

    while(n<1000){
        if(n%2==0){//Si su valor es par:
        //Súmale todos los enteros que existen en el rango de 1 a A.
            for(int i=1;i<=a;i++){
                n+=i;
            }
        }else{//En caso contrario:
            //Súmale todos los enteros que existen en el rango de 1 a B.
            for(int i=1;i<=b;i++){
                n+=i;
            }
        }
    }
    printf("%d",n);
    return 0;
}

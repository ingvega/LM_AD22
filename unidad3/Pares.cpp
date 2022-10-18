#include <stdio.h>

int main(){
    //A partir de la lectura de 5 números enteros indicar cuales
    //son pares y cuales impares
    int n1,n2,n3,n4,n5;
    //Contadores de pares e impares
    int pares=0,impares=0;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1%2==0){
        pares=pares+1;
        /*pares += 1; //a la variable pares sumale 1
        //pares+=2;
        pares++; //Operador de postincremento (incremento en 1)
        ++pares; //Operador de preincremento (incremento en 1)
        */
    }else{
        impares++;
    }

    if(n2%2==0){
        ++pares;
    }else{
        impares++;
    }

    if(n3%2==0){
        pares+=1;
    }else{
        impares+=1;
    }

    if(n4%2==0){
        pares++;
    }else{
        impares++;
    }

    if(n5%2==0){
        pares++;
    }else{
        impares++;
    }
    printf("Pares %d\nImpares %d",pares,impares);


    return 0;
}

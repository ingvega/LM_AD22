#include<stdio.h>

int main(){
    int pos=0,neg=0,ceros=0;

    int n1,n2,n3,n4,n5;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    if(n1<0){
        neg++;
        /*neg+=1;
        neg=neg+1;*/
    }else if(n1>0){
        pos++;
    }else{
        ceros++;
    }

    if(n2<0){
        neg++;
        /*neg+=1;
        neg=neg+1;*/
    }else if(n2>0){
        pos++;
    }else{
        ceros++;
    }

    if(n3<0){
        neg++;
        /*neg+=1;
        neg=neg+1;*/
    }else if(n3>0){
        pos++;
    }else{
        ceros++;
    }

    if(n4<0){
        neg++;
        /*neg+=1;
        neg=neg+1;*/
    }else if(n4>0){
        pos++;
    }else{
        ceros++;
    }

    if(n5<0){
        neg++;
        /*neg+=1;
        neg=neg+1;*/
    }else if(n5>0){
        pos++;
    }else{
        ceros++;
    }
    // Encontre 4 positivos, 1 negativo y 0 ceros


    printf("Encontre %d positivos, %d negativos y %d ceros",&pos,neg,ceros);

    return 0;
}

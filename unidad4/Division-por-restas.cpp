#include <stdio.h>
int main(){
    int veces=0,a=7,b=2;
    //while((a-=b)>=0){
    while(a>=b){
        a-=b;
        veces++;
    }
    printf("%d",veces);
    return 0;
}

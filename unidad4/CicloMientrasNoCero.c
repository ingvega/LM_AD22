#include<stdio.h>
int main(){
    int n=1,suma=0;
    scanf("%d",&n);

    while(n!=0){
            suma+=n;
            scanf("%d",&n);
    }
    printf("%d",suma-1);
    return 0;
}

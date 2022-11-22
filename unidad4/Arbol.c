#include<stdio.h>
int main(){
    int n,numEspacios,numO;
    scanf("%d",&n);
    numEspacios=n;
    numO=3;

    for(int i=1;i<=numEspacios;i++){
        printf(" ");
    }
    printf("*\n");
    numEspacios--;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=numEspacios;i++){
            printf(" ");
        }
        for(int i=1;i<=numO;i++){
            printf("o");
        }
        printf("\n");
        numEspacios--;
        numO+=2;
    }

    return 0;
}

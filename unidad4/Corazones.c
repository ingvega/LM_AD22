#include<stdio.h>
int main(){
    int lineas,corazones;
    scanf("%d",&lineas);
    for(int i=1;i<=lineas;i++){
        scanf("%d",&corazones);
        for(int j=1;j<=corazones;j++){
            printf("<3");
        }
        printf("\n");
    }

    return 0;
}

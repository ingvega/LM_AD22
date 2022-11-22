#include <stdio.h>

int main(){
    int num,res;

    printf("Indica el número para generar la tabla\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        res=i*num;
        printf("%d X %d = %d\n",num,i,res);
    }

    return 0;
}

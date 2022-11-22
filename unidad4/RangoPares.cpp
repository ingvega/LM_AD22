#include <stdio.h>

int main(){
    int num1,num2,res;

    scanf("%d %d",&num1,&num2);
    printf("Primera opción\n");
    for(int i=num1;i<=num2;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }



    printf("-----------------------------------------------\n");
    printf("Segunda opción\n");
    if(num1%2==1){
        num1++;
    }

    for(int i=num1;i<=num2;i+=2){
            printf("%d\n",i);
    }


    return 0;
}

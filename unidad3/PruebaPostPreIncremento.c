#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5=10;
    n1=5;
    n2=n1+1;
    n3=n2++;
    n4=++n3;
    n5+=n4;
    printf("%d %d %d %d %d",n1,n2,n3,n4,n5);
    //n1=5 n2=7 n3=7 n4=7 n5=17
    //n5= ++n1-n3++*n1--+9/2-n3++;
    //n1=5 n2=7 n3=8 n4=7 n5=17
    n5= (++n1-((n3++)*(n1--))+9/2-(n3++));

    printf("\n\n%d",n5);
    printf("\n%d %d %d %d %d",n1,n2,n3,n4,n5);
//n4=(n3++);
    //printf("\n\n%d",n3);

    //n5= (((++n1)-((n3++)*(n1--)))+(9/2))-(n3++);
    //
    //n5= (((++n1-(n3++*n1--))+(9/2))-n3++);

    //printf("\n\n%d",n5);
}

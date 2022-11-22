#include <stdio.h>
#include <math.h>
//#include <cmath>
int  main(){
    int g1,g2,r,dg1r,dg2r;
    scanf("%d%d%d",&g1,&g2,&r);
    dg1r=abs(g1-r);
    dg2r=abs(g2-r);
    //dg1r=abs(dg1r);
    /*if(dg1r<0){
        dg1r=dg1r*-1;
    }
    if(dg2r<0){
        dg2r=dg2r*-1;
    }*/

    if(dg1r==dg2r){
        printf("raton C");
    }
    if(dg1r<dg2r){
        printf("gato A");
    }
    if(dg1r>dg2r){
        printf("gato B");
    }
    return 0;
}

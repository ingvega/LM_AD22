#include <stdio.h>

int main(){
    /*Leer un entero N y un entero M, seguidos de N
    números enteros
    Debe imprimir cuantos números son mayores a M y
    menores a M, se excluyen los iguales
    */
            /*
            5 10
            11
            3
            10
            40
            5
        */
        int n,m,num,mayores=0,menores=0;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            scanf("%d",&num);
            if(num>m){
                mayores++;
            }else if(num<m){
                menores++;
            }
        }
        printf("Mayores %d\nMenores %d",mayores,menores);
    return 0;
}

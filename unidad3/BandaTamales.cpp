#include <stdio.h>

int  main(){
    int tamales,banda,integrantes,
    sobran,tamalesLider,mitad,tamalesIntegrante;

    scanf("%d %d",&tamales,&banda);
    sobran=tamales%2;
    //           (11-1)/2->10/2=5
    mitad=(tamales-sobran)/2;
    tamalesLider=mitad+sobran;
    integrantes=banda-1;
    //Obtener cuantos sobrarán despues de repartir entre los integrantes
    //             5%2=1
    sobran=mitad%integrantes;
    tamalesLider=tamalesLider+sobran;
    //                                (5-1)/2->4/2=2
    //tamalesIntegrante=(mitad-sobran)/integrantes;
    printf("%d",tamalesLider);
    return 0;
}

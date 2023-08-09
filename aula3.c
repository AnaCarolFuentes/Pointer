#include <stdio.h>
#include <stdlib.h>


int main(){

    int x = 10;
    double y = 20.5;
    char z = 'a';

    int *pX; //int *pX = &x
    pX = &x; // *Px = &x -> o valor do ponteiro seriaigual ao endereco da memoria de x
    double *pY = &y;
    char *pZ = &z;

    printf("Endereco x = %d, valor x = %d", pX, *pX); //Sem asterisco = busca pelo endereco da memoria
    //com asterisco = busca pelo valor da variavel
    printf("Endereco y = %d, valor y = %d", pY, *pY);
    printf("Endereco z = %d, valor z = %d", pZ, *pZ);


    return 0;
}
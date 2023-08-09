#include <stdio.h>
#include <stdlib.h>

int main(){
    //Entender a diferenca entre endereço de memoria e valor alocado

    int x = 10;

    int *ponteiro; //variavel que aponta para um valor inteiro
    ponteiro = &x; //ponteiro eh igual ao endereco de memoria da variavel x

    printf("Valor da variavel: %d", x);
    printf("Valor contido na memoria: %d", *ponteiro); //* = acessar o valor 
    printf("Endereço de memória: %d", ponteiro); //sem asterisco = acessar o endereco de memoria

}
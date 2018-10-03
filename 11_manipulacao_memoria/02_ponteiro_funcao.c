/*
  File:   acesso_memoria.c
  Author: lflrsilva

  Topicos abordados:
  - Aplicacao de ponteiros para funcoes
  - Uso de funcoes pelos ponteiros
  - Passagem de ponteiro de funcao para subrotina

  (c) Copyright 2017 Luiz Fernando Lopes Rodrigues Silva. All Rights Reserved.

 */

#include <stdio.h>
#include <stdlib.h>

int addInt(int n, int m) {
    return (n + m);
}

int addFunc(int (*fptr)(int, int), int nn, int mm) {
    return ( (*fptr)(nn, mm) );
}

int main(int argc, char** argv) {
    
    // declaracao de ponteiro de funcao
    int (*fptr)(int, int);
    int sum;

    // apontando para a funcao de interesse
    fptr = &addInt;

    // usando a funcao pelo ponteiro
    sum = (*fptr)(5, 6);
    printf("Soma = %d\n", sum);

    // passagem de ponteiro de funcao para subrotina
    sum = addFunc( (*fptr), 6, 7);
    printf("Soma = %d\n", sum);

    return(EXIT_SUCCESS);
}

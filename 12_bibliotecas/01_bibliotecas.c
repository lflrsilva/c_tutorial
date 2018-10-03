/* 
  File:   bibliotecas.c
  Author: lflrsilva

  Topicos abordados:
  - Implementacao de arquivos de cabecalho (*.h)
  - Sintaxe de uso

 * Arquivos de cabecalho
  Contem as declaracoes de funcoes (prototype) e definicoes de macro (#define)
  para compartilhar com diferentes codigos fonte. Os arquivos de cabecalho podem
  ser imbutidos pelo compilador (stdio.h, por exemplo) ou implementados pelo 
  desenvolvedor.
  
  Basicamente, o compilador processa o conteudo do arquivo de cabecalho como
  se o mesmo estivesse copiado no codigo principal. Assim, seu principal uso
  eh a reutilizacao em varios codigos diferentes.

 * Sintaxe de chamada do cabecalho
  
  #include <arquivo.h>  // para cabecalhos e bibliotecas do sistema
 
  #include "arquivo.h"  // para cabecalhos implementados por terceiros

 * Cuidados com a chamada dos cabecalhos
  a. Caso um cabecalho seja incluido duas (ou mais) vezes, o compilador ira
    processa-lo novamente resultando em erro. Para previnir esta situacao
    pode-se usar condicionais de declaracao.
      
    Arquivo foo.h:

    #ifndef FOO_H_
    #define FOO_H_       <--- Na primeira chamada, FOO_H_ sera definido
      ...
    conteudo do cabecalho
      ...
    #endif

  b. Condicionais de chamada de acordo com determinados parametros (tipo de 
    sistema, por exemplo).
    
    #if Condicao_Um
       # include "headerFile_Um.h"
    #elif Condicao_Dois
       # include "headerFile_Dois.h"
    #elif Condicao_Tres
       # include "headerFile_Tres.h"
      ...
      ...
    #endif
 
  (c) Copyright 2017 Luiz Fernando Lopes Rodrigues Silva. All Rights Reserved. 
 
 */

#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main(int argc, char** argv) {

    // declaracao de variaveis
    int n = 3;

    // uso da funcao do cabecalho
    printf("Valor da funcao : %d \n", getSquare(n));

    // check da macro definida no cabecalho
    printf("Valor da macro  : %d \n", NMAX);
    
    return (EXIT_SUCCESS);
}


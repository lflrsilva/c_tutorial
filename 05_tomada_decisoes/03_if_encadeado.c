/*
  File:   condicional_switch.c
  Author: lflrsilva

  Condicionais if encadeados
  Uso do if encadeado
  Exemplo do reator e análise das situações
   - Frio
   - Normal
   - Quente
   - Superaquecimento e reação fora de controle

  (c) Copyright 2021 Luiz Fernando Lopes Rodrigues Silva. All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int T = 50.0;     // temperatura do reator (oC)

    // Cálculos ou medidas no reator
    // Uso de controle no sistema

    // Diferentes linhas de ação de controle no aquecimento
    if (T < 97.5) {
        printf("Temperatura abaixo do normal");
        // instruções/comandos para ligar aquecedor
    }
    else if ( temp > 97.5 ) {
        printf("Temperatura normal");
        // desligar medidas de controle
    }
    else if ( temp > 99.5 ) {
        printf("Temperatura levemente alta");
        // instruções/comandos para ligar resfriamento
    }
    else if ( temp > 103.0) {
        printf("Temperatura perigosamente alta");
        // ações de emergência
    }
    else {
        printf("Comportamento anormal");
        // ações de emergência
    }

    return (EXIT_SUCCESS);
}

/*
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

                    UNIVERSIDADE CATÓLICA DE BRASÍLIA

Disciplina: Gerenciamento de Configuração e Mudanças
Professor: Me. Edgard Devanir Amoroso

Aluno: Pedro Felipe Dias de Oliveira
Curso: Engenharia de Software
Matrícula: UC17620317

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
INFORMAÇÕES RELEVANTES DO CÓDIGO:


# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
INSTRUÇÕES ADICIONAIS

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*/

#include <stdlib.h>
#include <stdio.h>

void header(){
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf(" ROTINA PARA CALCULO DE ARMADURA DE VIGAS EM CONCRETO ARMADO\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
}

void footer(){
    printf("\n\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("                     FIM DA EXECUCAO\n");
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
}

void outputData(double ascalc, int estadio){
    printf("\nArea de Aco calculada: %3.2f cm2.\n", ascalc);
    printf("\nEstadio: %d.\n", estadio);
}
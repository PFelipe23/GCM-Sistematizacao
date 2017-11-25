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
INFORMAÇÕE RELEVANTES DO CÓDIGO:


# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
INSTRUÇÕES ADICIONAIS

    > Compilar no Terminal: gcc -o ASCalc main.c
    > Executar pelo Terminal: ASCalc.exe
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*/

#include <stdlib.h>
#include <stdio.h>
#include "ascalc.h"
#include "output.h"

int main(){

    double areaAco;
    char linhaNeutra;

    header();

    areaAco = as(14.0,35.0,25.0,18.75);
    linhaNeutra = ln(14.0,35.0,25.0,18.75);

    outputData(areaAco,linhaNeutra);

    footer();
    getch();
    
    return 0;
}
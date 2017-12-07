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

    > Compilar no Terminal: gcc -o ASCalc main.c
    > Executar pelo Terminal: ASCalc.exe
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "ascalc.h"
#include "output.h"
#include "misc.h"

int main(){

    double areaAco;
    double volumeViga;
    double formaViga;
    int linhaNeutra;
    bool finalizar = true;

    while(finalizar){
        header();

        areaAco = as(14.0,35.0,25.0,18.75);
        linhaNeutra = ln(14.0,35.0,25.0,18.75);
        volumeViga = volume(14.0,35.0,4.5);
        formaViga = forma(14.0,35.0,4.5);

        outputData(areaAco,linhaNeutra,volumeViga,formaViga);

        footer();

        finalizar = sair();
    };

    finalFooter();
    sleep(5);
    return 0;
}
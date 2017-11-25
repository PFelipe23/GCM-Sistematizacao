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
#include <stdbool.h>
#include "ascalc.h"
#include "output.h"
#include "misc.h"

int main(){

    double areaAco;
    int linhaNeutra;
    bool finalizar = true;

    while(finalizar){
        header();

        areaAco = as(14.0,35.0,25.0,18.75);
        linhaNeutra = ln(14.0,35.0,25.0,18.75);

        outputData(areaAco,linhaNeutra);

        footer();

        finalizar = sair();
    };

        
    getch();
    
    return 0;
}
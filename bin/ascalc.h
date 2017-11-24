/*
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #

                    UNIVERSIDADE CATÓLICA DE BRASÍLIA

Disciplina: Gerenciamento de Configuração e Mudanças
Professor: 

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
#include <math.h>

double as(double bw, double h, double fck, double Md){

    double x, ascalc, d, fcd;

    fcd = fck/14;
    d = h - 3.0 - 0.63 - 0.4;

    x = 1.25*d*(1 - sqrt(1 - ((Md*100)/(0.425*bw*pow(d,2)*fcd))));

    ascalc = (Md*100)/(43.48*(d - 0.4*x));

    return ascalc;
}
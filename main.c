//invocações de libs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//cabecalho de funcoes
#include "funcq.h"

void questao_um();
void questao_dois();

int main()
{
    int op;
    do
    {
        printf("\n0.......................SAIR");
        printf("\n1................. Questão 1");
        printf("\n2................. Questão 2");
        printf("\nescolha dentra as opções:");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("\n\n obrigado pela visita!\n");
            break;
        case 1:
            questao_um();
            break;
        case 2:
            questao_dois();
            break;
        default:
            printf("\nInvalido!\n");
            break;
        }
    } while (op != 0);
    return 0;
}

void questao_um()
{
    int op;
    do
    {
        printf("\n0.......................SAIR");
        printf("\n1....................letra A");
        printf("\n2....................letra B");
        printf("\n3....................letra C");
        printf("\n4....................letra D");
        printf("\n5....................letra E");
        printf("\n6....................letra F");
        printf("\n7....................letra G");
        printf("\n8....................letra H");
        printf("\nescolha dentra as opções:");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("\n\n voltando ao menu anterior!\n");
            break;
        case 1:
            perimetro();
            break;
        case 2:
            qtd_anos_meses_dias();
            break;
        case 3:
            dist_entre_pontos();
            break;
        case 4:
            troco_menos_notas();
            break;
        case 5:
            mais_velho();
            break;
        case 6:
            usuarios_instagram();
            break;
        case 7:
            soma_dos_impares();
            break;
        case 8:
            soma_dos_n_quocientes();
            break;
        default:
            printf("\nInvalido!\n");
            break;
        }
    } while (op != 0);
}

void questao_dois()
{
    resolucao();
}
//invocações de libs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//cabecalho de funcoes
#include "um.h"
#include "dois.h"
#include "tres.h"

void questao_um();

int main()
{
    int op;
    do
    {
        printf("\n0.......................SAIR");
        printf("\n1................. Questão 1");
        printf("\n2................. Questão 2");
        printf("\n2................. Questão 3");
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
        case 3:
            questao_tres();
            break;
        default:
            printf("\nInvalido!\n");
            break;
        }
    } while (op != 0);
    return 0;
}

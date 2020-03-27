#ifndef TRES_H
#define TRES_H

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif

//prototipação de função
void questao_tres();
void cabecalho_da_questao2(int num);
void ordem_reversa();
void temperatura();
void angulos_triangulo();
void quadrante();
void por_extenso();
void delta();
void par_ou_impar();
void notas_poderadas();
void porcento();
void imc();
//end

void imc()
{
    float peso, altura;
    cabecalho_da_questao2(9);
    printf("digite peso e altura: ");
    scanf("%f %f", &peso, &altura);
    printf("IMC: %.3f", peso / pow(altura, 2));
}

void angulos_triangulo()
{
    float A, B;
    cabecalho_da_questao2(3);
    printf("\nDigite os angulos: ");
    scanf("%f %f", &A, &B);
    printf("\n angulo = %.2f", 180 - A - B);
}
void temperatura()
{
    float c;
    cabecalho_da_questao2(2);
    printf("\ndigite a teperatura: ");
    scanf("%f", &c);
    printf("%.1f", (c * 9 / 5) + 32);
}
void ordem_reversa()
{
    char buffer[20];
    int i;
    buffer[0] = '\0';
    cabecalho_da_questao2(1);
    printf("digite as letras: ");
    fgets(buffer, 20, stdin);
    for (i = 2; i >= 0; i--)
        printf("%c ", buffer[i]);
}
void quadrante()
{
    int x, y;
    cabecalho_da_questao2(4);
    printf("\ndigite os valore para X e Y: ");
    scanf("%d %d", &x, &y);
    if (x == 0 || y == 0)
        printf("\nlinha");
    else
    {
        if (x < 0 && y < 0)
            printf("\nterceiro");
        else
        {
            if (x < 0 && y > 0)
                printf("\nsegundo");
            else
            {
                if (x > 0 && y > 0)
                    printf("\nprimeiro");
                else
                    printf("\nquarto");
            }
        }
    }
}
void questao_tres()
{
    int op;
    do
    {
        printf("\n0.......................SAIR");
        printf("\n1................. Questão A");
        printf("\n1................. Questão B");
        printf("\n1................. Questão C");
        printf("\n1................. Questão D");
        printf("\nescolha dentra as opções:");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("\n\n voltando ao menu anterior!\n");
            break;
        case 1:
            ordem_reversa(0);
            break;
        case 2:
            temperatura();
            break;
        case 3:
            angulos_triangulo();
            break;
        case 4:
            quadrante();
            break;
        case 5:
            por_extenso();
            break;
        case 6:
            par_ou_impar();
            break;
        case 7:
            delta();
            break;
        case 8:
            notas_poderadas();
            break;
        case 9:
            imc();
            break;
        case 10:
            porcento();
            break;
        default:
            printf("\nInvalido!\n");
            break;
        }
    } while (op != 0);
}
void porcento()
{
    float num;
    cabecalho_da_questao2(10);
    printf("\nDigite o numero: ");
    scanf("%f", &num);
    printf("%.2f", num * 10 / 100);
}

void notas_poderadas()
{
    float n1, n2, p1, p2;
    cabecalho_da_questao2(8);
    printf("\nDigite as notas e pesos Nota 1, peso 1 , Nota 2, peso 2: ");
    scanf("%f %f %f %f", &n1, &p1, &n2, &p2);
    printf("%.2f", n1 * p1 + n2 * p2);
}

void delta()
{
    float a, b, c;
    cabecalho_da_questao2(7);
    printf("\nDigite os numeros: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nDelta = %.2f", pow(b, 2) - 4 * a * c);
}

void par_ou_impar()
{
    int num;
    cabecalho_da_questao2(6);
    printf("digite o numero: ");
    scanf("%d", &num);
    if (num % 2)
        printf("\nimpar");
    else
        printf("\npar");
}

void por_extenso()
{
    int num;
    cabecalho_da_questao2(5);
    printf("\nDigite o numero: ");
    scanf("%d", &num);
    switch (num)
    {
    case 0:
        printf("\nzero");
        break;
    case 1:
        printf("\num");
        break;
    case 2:
        printf("\ndois");
        break;
    case 3:
        printf("\ntres");
        break;
    case 4:
        printf("\nquatro");
        break;
    case 5:
        printf("\ncinco");
        break;
    case 6:
        printf("\nseis");
        break;
    case 7:
        printf("\nsete");
        break;
    case 8:
        printf("\noito");
        break;
    case 9:
        printf("\nnove");
        break;
    default:
        printf("\nfora de alcance");
        break;
    }
}

void cabecalho_da_questao2(int num)
{
    switch (num)
    {
    case 1: // a
        printf("\nAo receber três caracteres mostre-os em ordem reversa");
        break;
    case 2: // b
        printf("\nReceba uma temperatura em graus celsius e converta para fahrenheit");
        break;
    case 3: // c
        printf("\nReceba dois ângulos de triângulos separados por espaço e informe o valor o terceiro ângulo");
        break;
    case 4: // d
        printf("\nEscreva um programa que ao receber um número entre 0 e 9 informe como ele é escrito por extenso");
        break;
    case 5: // e
        printf("\nEscreva um programa que ao receber um número entre 0 e 9 informe como ele é escrito por extenso");
        break;
    case 6: // f
        printf("\nReceba um número inteiro e informe se ele é par ou ímpar.");
        break;
    case 7: // g
        printf("\nReceba as variáveis a, b e c de uma equação e informe o Delta dela.");
        break;
    case 8: // h
        printf("\nReceba duas notas e seus pesos e calcule a média ponderada.");
        break;
    case 9: //i
        printf("\nReceba altura e peso de um atleta e calcule o IMC (Índice de massa corporal)");
        break;
    case 10: //j
        printf("\nReceba um número e informe o valor de 10%% dele.");
        break;
    case 11: //k
        printf("\nDe 1 até N, se um número N for par, armazene a soma de todos os números ímpares de 1 até N com N informado pelo usuário. Exemplo: N=6 a resposta será 1 + (1 + 3) + (1 + 3 + 5) = 14");
        break;
    case 12: //l
        printf("\nReceba um número N e mostre na tela um triângulo de pascal com N linhas");
        break;
    case 13: //m
        printf("\nReceba um número N do usuário e informe todos os primos entre 1 e N.");
        break;
    case 14: //n
        printf("\nConverta um número binário de oito bits para decimal.");
        break;
    case 15: //o
        printf("\nReceba um número N e escreva-o como a soma de dois primos.");
        break;
    }
    printf("\n\n");
}

#endif
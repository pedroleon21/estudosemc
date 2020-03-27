#ifndef UM_H
#define UM_H

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#ifndef MATH_H
#define MATH_H
#include <math.h>
#endif

//prototipação das funções
void cabecalho_da_questao1(int num);
void perimetro();
void qtd_anos_meses_dias();
void dist_entre_pontos();
void troco_menos_notas();
void booblesort(int *vet, int size);
void mais_velho();
void usuarios_instagram();
void soma_dos_impares();
void soma_dos_n_quocientes();
float somador_iterativo(float quociente, float limit);
void questao_um();
//end

void soma_dos_n_quocientes()
{
    int N;
    cabecalho_da_questao1(8);
    printf("\nDigite o numero: ");
    scanf("%d", &N);
    printf("%.2f", somador_iterativo(1, (float)N));
}
float somador_iterativo(float quociente, float limite)
{
    float acumulado = 0;
    while (quociente <= limite)
    {
        acumulado += 1 / quociente;
        quociente++;
    }
    return acumulado;
}

void soma_dos_impares()
{
    int i, N, somador = 0;
    cabecalho_da_questao1(7);
    printf("\nDigite o numero: ");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
        if ((i % 2))
            somador += i;
    printf("\nTotal %d", somador);
}

void usuarios_instagram()
{
    int mes[2];
    cabecalho_da_questao1(6);
    printf("\nDigite a quantidade nos 2 meses: ");
    scanf("%d %d", &mes[0], &mes[1]);
    printf("\nA espectativa para o proximo mes é de %d seguidores", mes[1] + (mes[1] - mes[0]));
}

void mais_velho()
{
    int i, j, aux, vet[3];
    cabecalho_da_questao1(5);
    printf("\ndigite as idades: ");
    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);
    booblesort(vet, 3);
    printf("\n O mais velho é: %d", vet[2]);
}

void troco_menos_notas() //calcula notas somente com valores inteiros
{
    int valor, n50 = 0, n20 = 0, n10 = 0, n2 = 0;
    cabecalho_da_questao1(4);
    printf("\nDigite o valor: ");
    scanf("%d", &valor);
    while (valor >= 50)
    {
        n50++;
        valor -= 50;
    }
    while (valor >= 20)
    {
        n20++;
        valor -= 20;
    }
    while (valor >= 10)
    {
        n10++;
        valor -= 10;
    }
    while (valor >= 2)
    {
        n2++;
        valor -= 2;
    }
    printf("\nNotas decessarias: %d de 50, %d de 20, %d de 10, %d de 2 e %d de 1 ,total %d", n50, n20, n10, n2, valor, n50 * 50 + 20 * n20 + 10 * n10 + 2 * n2 + valor);
}

void dist_entre_pontos()
{
    double y1, y2, x1, x2;
    cabecalho_da_questao1(3);
    printf("\nDigite os valores para x e y ponto 1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("\nDigite os valores para x e y ponto 2: ");
    scanf("%lf %lf", &x2, &y2);
    printf("\n\n%.2lf", sqrt((double)pow((x2 - x1), 2) + (double)pow((y2 - x1), 2)));
}
void qtd_anos_meses_dias() // calcula quantidade de anos meses e dias com entrada quatidade de dias
{
    int dia = 0, ano = 0, mes = 0;
    cabecalho_da_questao1(2);
    printf("\nDigite a quantidade de dias:");
    scanf("%d", &dia);
    while (dia >= 360)
    {
        ano++;
        dia -= 360;
    }
    while (dia >= 30)
    {
        mes++;
        dia -= 30;
    }
    printf("\n%d Anos, %d meses, %d dias", ano, mes, dia);
}
void perimetro()
{
    float *vet;
    vet = (float *)calloc(3, sizeof(float));
    cabecalho_da_questao1(1);
    scanf("%f %f %f", &vet[0], &vet[1], &vet[2]);
    if (abs(vet[1] - vet[2]) < vet[0] && vet[0] < vet[1] + vet[2])
        printf("\nPerimetro = %.2f", (vet[0] + vet[1] + vet[2]));
    else
        printf("\nNão é triangulo!");
}
void booblesort(int *vet, int size) //booble sort function
{
    int i = 0, j, aux;
    int flag = 1;
    for (i = 0; i < size && flag; i++)
    {
        flag = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                flag = 1;
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}
void cabecalho_da_questao1(int num)
{
    switch (num)
    {
    case 1: // a
        printf("\nCalcular o perímetro e a área de um retângulo tendo como entrada o tamanho de seu lados.\n");
        break;
    case 2: // b
        printf("\nConverter quantidade de dias para anos, meses e dias. (leve em consideração que um ano tem 360 dias e um mês tem 30 dias)");
        break;
    case 3: // c
        printf("\nDistância entre dois pontos");
        break;
    case 4: // d
        printf("\nPara um valor inteiro, informar o troco com a menor quantidade de notas disponíveis");
        break;
    case 5: // e
        printf("\nVocê deve receber a idade de três amigos e dizer quem deles é o mais velho");
        break;
    case 6: // f
        printf("\nReceba, separado por vírgula, a quantidade de seguidores no instagram de um usuário nos últimos dois meses e baseado nisso, informe a quantidade esperada de seguidores no próximo mês.");
        break;
    case 7: // g
        printf("\nA partir de um número inteiro N, calcule a soma de todos os impares de 1 até N");
        break;
    case 8: // h
        printf("\nCalcule a soma dos N termos de uma série harmônica (1 + 1/2 + 1/3 + 1/4 + ... + 1/n)");
        break;
    }
    printf("\n\n");
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

#endif
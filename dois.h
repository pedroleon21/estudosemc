#ifndef DOIS_H
#define DOIS_H

#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
#endif

//PROTOTIPAÇÃO
void questao_dois();
void print_dtob(int numero, int base);
void mostra(int num);
//END
//BLOCO DE FUNÇÕES

void mostra(int num)
{
    printf("%d ", num);
    printf("    ");
    print_dtob(num, 2);
    printf("    ");
    print_dtob(num, 8);
    printf("    ");
    print_dtob(num, 16);
    printf("    ");
    print_dtob(num, 3);
    printf("    ");
    print_dtob(num, 7);
    printf("    ");
    printf("\n");
}

void print_dtob(int numero, int base)
{ //logica deve ser em pilha
    if (numero <= 0)
        return;
    if (numero % base >= 10)
    {
        print_dtob(numero / base, base);
        printf("%c", 87 + numero % base);
    }
    else
    {
        print_dtob(numero / base, base);
        printf("%d", numero % base);
    }
}

void questao_dois()
{
    char buffer[30];
    int num = 180;
    mostra(num);
    num = 166;
    mostra(num);
    num = 158;
    mostra(num);
    num = 13;
    mostra(num);
    num = 244;
    mostra(num);
}

#endif
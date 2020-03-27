#ifndef BINARYLIB_H
#define BINARYLIB_H

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

#ifndef STRING_H
#define STRING_H
#include <string.h>
#endif
//prototipação de funções
void print_dtob(int numero, int base);

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
#endif
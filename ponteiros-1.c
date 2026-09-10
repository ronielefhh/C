#include <stdio.h>

int main()
{
    int idade;
    float altura;
    char inicial;

    idade = 27;
    altura = 1.52;
    inicial = 'S';

    printf("Valores:\nIdade: %d\nAltura: %.2f\nInicial: %c\n", idade, altura, inicial);
    printf("\nEndereços de memória:\nIdade: %p\nAltura: %p\nInicial: %p\n", (void *)&idade, (void *)&altura, (void *)&inicial);

    return 0;
}
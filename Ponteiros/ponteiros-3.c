#include <stdio.h>

int main() {
    // declarar variáveis e ponteiros
    int x = 10;
    int *p = &x;

    // escrever valores e endereços iniciais da variável e do ponteiro
    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", (void*)&x);
    printf("Valor do ponteiro p (p): %p\n", (void*)p);
    printf("Valor apontado pelo ponteiro p (*p): %d\n", *p);

    *p = 20; // modificar o valor de x através do ponteiro
    
    // escrever o novo valor de x após a modificação
    printf("\nNovo valor de x, alterado através do ponteiro p (*p): %d\n", x);
    
    return 0;
}
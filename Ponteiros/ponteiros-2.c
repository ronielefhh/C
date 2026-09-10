#include <stdio.h>

int main()
{
    int a = 10; // variavel inteira a
    int *p = &a; // ponteiro que armazena o endereço de a
    
    printf("Valor de a: %d\n", a); // valor da variavel a
    printf("Endereço de a: %p\n", (void*)&a); // endereço da variavel a
    printf("Conteúdo do ponteiro p: %p\n", (void*)p); // conteúdo do ponteiro p (endereço de a)
    printf("Valor apontado por p: %d\n", *p); // valor apontado pelo ponteiro p (valor de a)

    return 0;
}
#include <stdio.h>

int main (void)
{
    int INDICE;
    int SOMA;
    int K;
    INDICE = 12;
    SOMA = 0;
    K = 1;

    while(K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("%d",SOMA);
}
// a Resposta será 77.
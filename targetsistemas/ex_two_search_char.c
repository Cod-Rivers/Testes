#include <stdio.h>
#include <stdlib.h>

void ft_strchr(char *str, int c)
{
    int i;
    int q;
    i = 0;
    q = 0;
    while (str[i] != '\0')
    {
        if(str[i] == (char) c || str[i] == (char) c - 32)
        {
            q++;
        }
        i++;
             
    }
    if(q == 0)
        printf("não existe a letra 'a' na frase!\n", q);
    else 
        printf("existe %i ocorrencias da letra a ", q);
}

int main()
{
    char *string = NULL;
    int capacity ; 
    int size;
    int c;
    int d;
    capacity = 1;
    size = 0;
    c = 'a';

    
    string = (char *)malloc(capacity * sizeof(char));
    if (string == NULL) {
        printf("Erro de alocação\n");
        return 1;
    }

    printf("escreva uma frase qualquer e pressione a tecla enter \n");
    while ((d = getchar()) != '\n')
    {
        if(size + 1 >= capacity)
        {
            capacity *= 2;
            string = (char *) realloc(string, capacity *sizeof(char));
            if(string == NULL)
            {
                printf("Erro de alocação \n");
                return (1);
            }
        }
         string[size++] = d;
    }
    string[size] = '\0';
    ft_strchr(string, c);

    free(string);
    return 0;
}
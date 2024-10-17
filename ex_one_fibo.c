#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n')
        || (str[i] == '\r') || (str[i] == '\t')
        || (str[i] == '\v'))
    {
        i++;
    }
    if ((str[i] == '-') || (str[i] == '+'))
    {
        if (str[i++] == '-')
        {
            sign = sign * -1;
        }
    }
    while((str[i]) >= '0' && (str[i] <= '9'))
    {
        result = (result * 10) + ((char) str[i++] - '0');
    }
    return (result * sign);
}

int is_fibo(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n == 0)
    {
        return (0);
    }
    if (n == 1)
    {
        return (1);
    }
    return (is_fibo(n -1) + is_fibo(n - 2));
}

int main (int argc, char *argv[])
{
    int c;
    int i;
    int result;
        
    if (argc > 1)
    {
        i = 0;
        c = ft_atoi(argv[1]); 
        while(1)
        {
            result = is_fibo(i);
            
            if(result == c)
            {
                printf("o numero %d pertence a fibo", c);
                break;
            }
            if(result > c)
            {
                printf("o numero %d não pertence a fibo", c);
                break;
            }
            i++;
        }
    }
    else
    {
        printf("forneça um argumento");
    }
}

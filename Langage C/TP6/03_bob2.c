#include <stdio.h>
#include <stdlib.h>

//Seconde version en utilisant des fonctions

int add(int a, int b)
{
    return a + b;
}

long mul(int a, int b)
{
    return (long)a * b;
}

double div(int a, int b)
{
    return (double)a / b;
}

int main()
{
    int first, second;
    char res;

    printf(">>> ");
    scanf("%d %c %d", &first, &res, &second);

    switch(res)
    {
        case '+' :
            printf(" = %d\n", add(first, second));
            break;

        case '*' :
            printf(" = %ld\n", mul(first, second));
            break;

        case '/' :
            printf(" = %lg\n", div(first, second));
            break;
    }

    exit(EXIT_SUCCESS);
}

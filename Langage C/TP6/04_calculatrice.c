#include <stdio.h>
#include <stdlib.h>

int scanInt()
{
    int inte;
    scanf("%d", &inte);
    return inte;
}

char scanOp()
{
    char op;
    scanf(" %c", &op);
    return op;
}

long addInt(int a, int b)
{
    return a + b;
}

long subInt(int a, int b)
{
    return a - b;
}

long mulInt(int a, int b)
{
    return a * b;
}

double divInt(int a, int b)
{
    return (double)a / b;
}

int modInt(int a, int b)
{
    return a % b;
}

long powInt(int a, int b)
{
    long r = 1;
    int i;

    for (i = 0; i < b; i++)
    {
        r *= a;
    }

    return r;
}

void compute(int first, char op, int second)
{
    switch(op)
    {
        case '+' :
            printf(" = %ld\n", addInt(first, second));
            break;
        case '-' :
            printf(" = %ld\n", subInt(first, second));
            break;
        case '*' :
            printf(" = %ld\n", mulInt(first, second));
            break;
        case '/' :
            printf(" = %lg\n", divInt(first, second));
            break;
        case '%' :
            printf(" = %d\n", modInt(first, second));
            break;
        case '^' :
            printf(" = %ld\n", powInt(first, second));
            break;
    }
}

int main()
{
    int first, second;
    char op;
    printf(">>> ");
    first = scanInt();
    op = scanOp();
    second = scanInt();
    compute(first, op, second);
    exit(EXIT_SUCCESS);
}

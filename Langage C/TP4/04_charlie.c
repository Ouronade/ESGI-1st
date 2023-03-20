#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Entrez deux nombres : \n");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("%d et %d sont egaux \n", a, b);
    }
    else
    {
        c = ((a - b) == a - b) ? b : a;
        printf("Entre %d et %d, le plus petit est %d\n", a, b, c);
    }

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x;
    int div;

    printf("Entrez un entier : ");
    scanf("%d", &x);
    printf("Liste des diviseurs de %d :\n", x);

    for(div = 1; div <= x; ++ div)
    {
        if(x % div == 0)
        printf("%d \n", div);
    }

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>

float moyenne()
{
    float somme = 0;
    int nombre = 0;
    float valeur;

    while (1) 
    {
        scanf("%f", &valeur);

        if (valeur < 0) 
        {
            break;
        }

        somme += valeur;
        nombre++;
    }

    return somme / nombre;
}

int main()
{
    printf("La moyenne de ");
    printf("= %g\n", moyenne());
    exit(EXIT_SUCCESS);
}

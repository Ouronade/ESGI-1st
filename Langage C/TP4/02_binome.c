#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;
    int nombre1;
    int nombre2;
    char operation;
    int resultat;
    printf("1 - Calculer \n2 - Quitter \n--- \n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1)
    {
        scanf("%d %c %d",&nombre1, &operation, &nombre2);
        if (operation == '+')
        {
            resultat = nombre1 + nombre2;
            printf("%d + %d = %d", nombre1, nombre2, resultat);
        }
        else if (operation == '-')
        {
            resultat = nombre1 - nombre2;
            printf("%d - %d = %d", nombre1, nombre2, resultat);
        }
        else if (operation == '*')
        {
            resultat = nombre1 * nombre2;
            printf("%d * %d = %d", nombre1, nombre2, resultat);
        }
        else if (operation == '/')
        {
            resultat = nombre1 / nombre2;
            printf("%d / %d = %d", nombre1, nombre2, resultat);
        }
        else if (operation == '%')
        {
            resultat = nombre1 % nombre2;
            printf("%d %% %d = %d", nombre1, nombre2, resultat);
        }
    }

    exit(EXIT_SUCCESS);
}

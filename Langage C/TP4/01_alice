#include <stdio.h>
#include <stdlib.h>

int main()
{
    int argent;
    int prix_article;
    int remise;
    int prix_final;
    printf("Votre argent : ");
    scanf("%d", &argent);
    printf("Le prix de l'article (hors soldes) : ");
    scanf("%d", &prix_article);
    printf("Remise en % : ");
    scanf("%d", &remise);

    prix_final = prix_article * (1 - (float) abs(remise) / 100);
    printf("L'article en solde vaut %d \n", prix_final);

    if (prix_final <= argent)
    {
        printf("J'achete !");
    }
    else
    {
        printf("Je n'ai pas assez d'argent...\n");
    }

    exit(EXIT_SUCCESS);
}

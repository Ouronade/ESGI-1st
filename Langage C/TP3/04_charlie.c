#include <stdio.h>
#include <stdlib.h>

int main() 
{
    double resultat = 1.;
    float ajout = 1e-9;
    printf("resultat = %.15f\n", resultat);
    printf("on ajoute %.15f\n", ajout);
    resultat += ajout;
    printf("resultat = %.15f\n", resultat);
    /* Pourquoi resultat ne change pas ? 
       Il faut afficher 'resultat' comme un double pour empecher qu'il n'arrondisse 'ajout' au delà de 1. */

    exit(EXIT_SUCCESS);
}

#include <stdio.h>
#include <stdlib.h>

/*
    Je n'ai pas réussi cet exercice car je ne savais pas avec quelle type il fallait écrire les variables.
*/

int main() 
{
    unsigned p = 4285404239;
    unsigned m = 0x5c003212;
    unsigned k = 2015201261;
    unsigned r;

    r = m * k;
    r = r % p;

    printf("Le message est : %c\n", r);


    /*Le programme peut également s'écrire sous la forme d'une demande */


    unsigned p2 = 4285404239;
    unsigned k2 = 2015201261;
    unsigned r2;
    unsigned m2;

    printf("Quel est le message que vous souhaitez lire / ecrire ? ");
    scanf("%c\n", &m2);

    r2 = m2 * k2;
    r2 = r2 % p2;

    printf("Le message lu / ecrit est : %c\n", r2);

    exit(EXIT_SUCCESS);
}

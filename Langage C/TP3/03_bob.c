#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long big = 0;
    int ajout;
    printf("big vaut %ld, faites le grossir ", big);    /* Il y a un problème sur le faîtes qui doit s'écrire sans 'î' car celui-ci n'est pas reconnu comme un caractère*/
    scanf("%d", &ajout);
    big += ajout;                                       /* Il est préférable d'écrire le code avec += afin d'éviter des problèmes innatendu */
    printf("big vaut %ld !\n", big);

    exit(EXIT_SUCCESS);
}

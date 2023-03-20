#include <stdio.h>
#include <stdlib.h>

int main() 
{
    unsigned p = 4285404239;
    unsigned k = 2015201;
    unsigned key;

    key = 1 / (k % p);

    printf("La clé secrète d'Oscar vaut %x \n", key);

    exit(EXIT_SUCCESS);
}

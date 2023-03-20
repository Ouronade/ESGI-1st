#include <stdio.h>
#include <stdlib.h>

//Première version sans utiliser de fonctions

int main()
{
    int first, second;
    char res;
    int add;
    long mul;
    double div;

    printf(">>> ");
    scanf("%d %c %d", &first, &res, &second);

    switch(res) 
    {
        case '+' :
            add = first + second;
            printf(" = %d\n", add);
            break;
        
        case '*' :
            mul = (long)first * second;
            printf(" = %ld\n", mul);
            break;

        case '/' :
            div = (double)first / second;
            printf(" = %lg\n", div);
            break;
    }

    exit(EXIT_SUCCESS);
}

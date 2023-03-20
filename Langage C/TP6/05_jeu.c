#include <stdio.h>
#include <stdlib.h>

int joueur_vie = 100;
int joueur_attaque = 50;
int joueur_defense = 30;

int adversaire_vie = 100;
int adversaire_attaque = 50;
int adversaire_defense = 30;

void cogner()
{
    printf("Le joueur cogne l'adversaire.\n");
    adversaire_vie -= joueur_attaque - adversaire_defense;
}

void se_soigner()
{
    printf("Le joueur se soigne.\n");
    joueur_vie += 20;
    if (joueur_vie >= 200)
    {
        joueur_vie = 200;
        printf("Le joueur a sa vie au maximum !\n");
    }
}

void augmenter_attaque()
{
    printf("Le joueur augmente son attaque.\n");
    joueur_attaque += 10;
    if (joueur_attaque >= 100)
    {
        joueur_attaque = 100;
        printf("Le joueur a son attaque au maximum !\n");
    }
}

void augmenter_defense()
{
    printf("Le joueur augmente sa defense.\n");
    joueur_defense += 10;
    if (joueur_defense >= 60)
    {
        joueur_defense = 60;
        printf("Le joueur a sa defense au maximum !\n");
    }
}

void adversaire_cogner()
{
    printf("L'adversaire cogne le joueur.\n");
    joueur_vie -= adversaire_attaque - joueur_defense;
}

void adversaire_se_soigner()
{
    printf("L'adversaire se soigne.\n");
    adversaire_vie += 20;
    if (adversaire_vie >= 200)
    {
        adversaire_vie = 200;
        printf("L'adversaire a sa vie au maximum !\n");
    }
}

void adversaire_augmenter_attaque()
{
    printf("L'adversaire augmente son attaque.\n");
    adversaire_attaque += 10;
    if (adversaire_attaque >= 100)
    {
        adversaire_attaque = 100;
        printf("L'adversaire a son attaque au maximum !\n");
    }
}

void adversaire_augmenter_defense()
{
    printf("L'adversaire augmente sa defense.\n");
    adversaire_defense += 10;
    if (adversaire_defense >= 60)
    {
        adversaire_defense = 60;
        printf("L'adversaire a sa defense au maximum !\n");
    }
}

void adversaire_action()
{
    int adversaire_choix = rand() % 4 + 1;
    switch (adversaire_choix)
        {
            case 1:
                adversaire_cogner();
                break;
            case 2:
                adversaire_se_soigner();
                break;
            case 3:
                adversaire_augmenter_attaque();
                break;
            case 4:
                adversaire_augmenter_defense();
                break;
        }
}

void afficher_etat()
{
    printf("+-------------------+-------------------+\n");
    printf("|      Joueur       |     Adversaire    |\n");
    printf("+-------------------+-------------------+\n");
    printf("| Vie :         %3d | Vie :         %3d |\n", joueur_vie, adversaire_vie);
    printf("| Attaque :     %3d | Attaque :     %3d |\n", joueur_attaque, adversaire_attaque);
    printf("| Defense :     %3d | Defense :     %3d |\n", joueur_defense, adversaire_defense);
    printf("+-------------------+-------------------+\n");
}

int main()
{
    int choix;
    while (joueur_vie > 0 && adversaire_vie > 0) {
        afficher_etat();
        printf("1 - cogner.\n");
        printf("2 - se soigner.\n");
        printf("3 - augmenter attaque.\n");
        printf("4 - augmenter defense.\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        printf("\n");

        switch (choix)
        {
            case 1:
                cogner();
                adversaire_action();
                break;
            case 2:
                se_soigner();
                adversaire_action();
                break;
            case 3:
                augmenter_attaque();
                adversaire_action();
                break;
            case 4:
                augmenter_defense();
                adversaire_action();
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
    if (joueur_vie <= 0 && adversaire_vie <= 0)
    {
        printf("Les deux combattants sont mort. Il y a égalité.\n");
    } else if  (joueur_vie <= 0)
    {
        printf("Le joueur est mort. L'adversaire a gagné.\n");
    }else
    {
        printf("L'adversaire est mort. Le joueur a gagné.\n");
    }
    return 0;

    exit(EXIT_SUCCESS);
}

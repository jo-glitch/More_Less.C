#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main()
{
    int nombreMystere = 0, nombreEntre = 0; // nombre mystere et nombre entre par le joueur
    int nombreMax = 0, nombreMin = 0; // le nombre mystere choisi entre 1 à 100
    srand(time(NULL));
    
    
    int continuerPartie = 1; // par defaut on le met à 1
    
    do // boucle qui permet de demander de refaire une partie ou non et changer le niveau, remettre le compteur à 0 et choisir un nouveau nombre en fonction du niveau
    {
            // Menu pour le niveau
        int choixNiveau = 0;
        printf("=== Menu ===\n");
        printf("Tapez 1 pour niveau 1 = 1 à 100\n");
        printf("Tappez 2 pour niveau 2 = 1 à 1000\n");
        printf("Tappez 3 pour niveau 3 = 1 à 10000\n");
        scanf("%d", &choixNiveau);
    // choix du niveau par defaut ce sera le niveau 1
        switch(choixNiveau)
        {
        
            case 2:
                    printf("Vous avez choisi le niveau 2\n\n");
                    nombreMax = 1000;
                    nombreMin = 1;
            break;
            case 3:
                    printf("Vous avez choisi le niveau 3\n\n");
                    nombreMax = 10000;
                    nombreMin = 1;
            break;
            default:
                    printf("Vous avez choisi le niveau 1\n\n");
                    nombreMax = 100;
                    nombreMin = 1;
            break;
        }
            int compteur = 0;
            nombreMystere = (rand() % (nombreMax - nombreMin + 1)) + nombreMin; // ce qui permet de donner un nb aléatoire
            do
        {

            printf("nombre de coup : %d \n", compteur);
            printf("Trouvez le chiffre mystere !\ncompris entre %d et %d : ", nombreMin, nombreMax);
            scanf("%d", &nombreEntre);

            if(nombreMystere > nombreEntre)
            {
                printf("c'est plus !\n\n");
            }else if(nombreMystere < nombreEntre)
            {
                printf("c'est moins !\n\n");
            }else
            {
                printf("Bravo tu as trouver !\n\n");
            }
            compteur++;
        }while(nombreEntre != nombreMystere);

        printf("voulez vous faire une nouvelle partie une partie ? 1 = oui, 0 = non : ");
        scanf("%d", &continuerPartie);

    }while(continuerPartie != 0);

    
    
    
    return 0;
}
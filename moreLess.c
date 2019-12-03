#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    // fct pour compter les nombres de coup qu'on initialise à 1 pour le 1er coup
int comptCoup(int coup)
{
    coup = 1;
    return coup;
}
    // fct qui va permettre de rejouer si on le souhaite
int replay(int game)
{
    game = 1;
    return game;
}

// fct principale
int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    // varaible pour le nombre compris entre 1 et 100
    int Max = 100, Min = 1;
    // nombre aleatoire

    srand(time(NULL));
    // nombreMystere = (rand() % (Max - Min + 1)) - 1;
    // variable pour la fct comptCoup

     int compteur = 0, plusUn =0;

    // variable pour la fct replayer
    int rejouer = 0, ouiNon = 0;
    rejouer = replay(ouiNon);

        // boucle pour rejouer si on le souhaite et compteur à 0
    do
    {
        // a chaque nvelles parties un nouveaux chiffre aleatoire et choisi et le compteur retour a 1

        nombreMystere = (rand() % (Max - Min + 1)) - 1;
        compteur = comptCoup(plusUn);
            // boucle du plus ou moins et du compteur
            do
            {
                printf("Nombre de tentative(s) : %d\n", compteur);
                printf("Trouvez le nombre mystere compris entre 1 et 100 : \n");
                scanf("%d", &nombreEntre);
                if(nombreMystere < nombreEntre)
                {
                    printf("c'est moins\n");
                }else if( nombreMystere > nombreEntre)
                {
                    printf("C'est plus !\n");
                }else
                {
                    printf("Bravo tu as trouver, au bout de %d tentative(s) !\n", compteur);
                }
                // chaque appel de boucle + 1 au compteur
                compteur++;
                // tant que nombreMystere N'EST pas egale a nombreEntre rejouer la boucle
            }while(nombreMystere != nombreEntre);

        printf("Voulez vous rejouer ? 1 = oui, 0 = non  : ");
        scanf("%d", &rejouer);
    
        // tant que rejouer N'EST pas egale à 0 on rejouer
    }while(rejouer != 0);
    return 0;
}
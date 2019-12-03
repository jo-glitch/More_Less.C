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
// fct qui permet le choix du menu
int menuNiveau(int level)
{
    level = 0;
    printf("=== Menu ===\n");
    printf("1 : Niveau 1 = 1 à 100\n");
    printf("2 : Niveau 2 = 1 à 1000\n");
    printf("3 : Niveau 3 = 1 à 10000\n");
    printf("Selectionnez le niveau que vous voulez\n");
    scanf("%d", &level);
            // switch pour savoir quel nv est selectionner
            switch(level)
            {
                case 1:
                    printf("vous avez choisi le 1er niveau\n");
                break;
                case 2:
                    printf("vous avez choisi le 2eme niveau\n");   
                break;
                case 3: 
                    printf("vous avez choisi le niveau 3\n");
                break;
                default : 
                    printf("\nVeuillez selectionner le numero du niveau voulu");
                break;
            }
    
    return level;
}
// fct dans laquel on a mit la fct menuNiveau et qui permet d'augmenter la difficulte
int levelNumbre(int nombre)
{
    // on place la fct dans la var niveau qu'on place elle meme ds la var nombre
    int niveau = 0;
    nombre = menuNiveau(niveau);

    if(nombre == 2)
    {
        nombre = 1000;
    }else if(nombre == 3)
    {
        nombre = 10000;
    }else
    {
        nombre = 100;
    }
    return nombre;
}

// fct principale
int main()
{
    // nombre qui devra être trouver et nombre qui l'utilisateur rentrera
    int nombreMystere = 0, nombreEntre = 0;
    // varaible pour le nombre compris entre 1 et 100
    int Max = 0, nombreMax = 0, Min = 1;
    
    
    // nombre aleatoire
    srand(time(NULL));  // declaration de nombre aleatoire, formule : var = (rand() % (MAX - MIN + 1)) - 1;
    // nombreMystere = (rand() % (Max - Min + 1)) - 1;
    // variable pour la fct comptCoup

     int compteur = 0, plusUn =0;

    // variable pour la fct replayer
    int rejouer = 0, ouiNon = 0;
    rejouer = replay(ouiNon);

    // variable pour la fonction menuNiveau
    int menu = 0, selection = 0;
    

        // boucle pour rejouer si on le souhaite et remettre le compteur à 0
    do
    {
        // on ajoute dans cette var la fct levelNumbre pour qu'une fois le menu selectionner on lui ajoute soit 100, 1000 ou 10000
        Max = levelNumbre(nombreMax);

        // a chaque nvelles parties un nouveaux chiffre aleatoire et choisi et le compteur retour a 1
        nombreMystere = (rand() % (Max - Min + 1)) - 1; // formule nb aleatoire
        compteur = comptCoup(plusUn);
            // boucle du plus ou moins et du compteur
            do
            {
                printf("Nombre de tentative(s) : %d\n", compteur);
                printf("Trouvez le nombre mystere compris entre %d et %d : \n", Min, Max);
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
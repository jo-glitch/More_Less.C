#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// fct Menu
int choiceMenu( int level){
    
    level= 0; 

        do{
            printf("===Menu===\n");
            printf("1: Niveau 1 = de 1 à 100\n");
            printf("2: Niveau 2 = de 1 à 1000\n");
            printf("3: Niveau 3 = de 1 à 10000\n");
            // on recupere les données saisie par l'utilisateur et pour le place dans la var level
            scanf("\n%d", &level);

            // switch pour le choix du niveau me semble preferable
            switch(level){
                case 1:
                    printf("Vous avez choisi le niveau 1\n");
                    break;
                case 2:
                    printf("Vous avez choisi le niveau 2\n");
                    break;
                case 3:
                    printf("Vous avez choisi le niveau 3\n");
                    break;
                default:
                    printf("choissiez un niveau valable\n");
                    break;

            }
            // if(level == 1){
            //     printf("Vous avez choisi le niveau 1\n");
            // }else if(level == 2){
            //     printf("Vous avez choisi le niveau 2\n");
            // }else if (level == 3){
            //     printf("Vous avez choisi le niveau 3\n");
            // }else if(level > 3 || level == 0){
            //     printf("choissiez un niveau valable\n");
            // }
        }while(level > 3 || level == 0);
            

    return level;
}
// fct evolution de la difficulter

int difficult(int numberChoice){
    int level = 0;
    numberChoice = choiceMenu(level);
    switch(numberChoice){
        case 2:
            level = 1000;
            break;
        case 3:
            level = 10000;
            break;
        default:
            level = 100; 
            break;
    }
    // if(numberChoice == 2)
    // {
    //     level = 1000;
    // }else if(numberChoice == 3)
    // {
    //     level = 10000;
    // }else{
    //     level = 100;
    // }
    return level;
}

// fct principal
int main(){
        // nombre mystere et nombre entre par les utilisateur, compteur de tour
        int mysterieNumber = 0, numberEntrer = 0, counter = 0;

        // rreplay
        int restart = 0;

        // nombre max et min
        int max = 100, numberMax = 0, min = 1;
        srand(time(NULL));

        mysterieNumber = (rand() % (max - min + 1)) - 1;
            // boucle pour savoir si le joueur veut rejouer
        do{
            max = difficult(numberMax);
            mysterieNumber = (rand() % (max - min + 1)) - 1;
            counter = 0;
            // boucle pour le jeux
            do{
                printf("Nombre de coup : %d\n", counter);
                printf("entre %d et %d\n", min, max);
                scanf("%d", &numberEntrer);

                if(mysterieNumber > numberEntrer)
                {
                    printf("C'est plus !\n");
                }else if(mysterieNumber < numberEntrer)
                {
                    printf("c'est moins !\n");
                }else
                {
                    if( counter <= 1){
                        printf("Bravo tu as trouver en %d coup\n", counter);
                    }else{
                        printf("Bravo tu as trouver en %d coups\n", counter);
                    }
                }
                counter++;
            }while(mysterieNumber != numberEntrer);
            printf("Voulez vous rejouer ? 1 = oui, 0 = non : ");
            scanf("%d", &restart);
        }while(restart != 0);


    return 0;
 }
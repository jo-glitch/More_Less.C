#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    // fct pour compter les nombres de coup qu'on initialise à 1 pour le 1er coup
int comptCoup(int coup){
    coup = 1;
    return coup;
}
int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) - 1;
    // variable pour la ftc comptCoup
     int compteur = 0, plusUn =0;
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
}
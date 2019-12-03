#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) - 1;
    int compteur = 1;
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
        compteur++;
    }while(nombreMystere != nombreEntre);
}
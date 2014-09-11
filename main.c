#include <stdio.h>
#include <stdlib.h>
#include "headers.h"



int main(int argc, char *argv[])
{
    int tableau[4] = {150, 5, 55, 7};
    int tableauoriginal[4];
    int i;
    for (i = 0 ; i < 4 ; i++)
    {
        tableauoriginal[i] = tableau[i];
    }

    affiche(tableau, 4);
    sommeTableau(tableau, 4);
    moyenneTableau(tableau, 4);
    ordonnerTableau(tableau, 4);
    copie(tableau, tableau, 4); //does not work right now
    return 0;
}

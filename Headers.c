void affiche(int tableau[], int tailleTableau)
{
    int i;

    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

//adds up the the numbers in the array.

int sommeTableau(int tableau[], int tailleTableau)
{
    int i;
    int total = 0;
    for (i = 0 ; i < tailleTableau ; i++)
    {
    total += tableau[i];
    }
    printf("La somme totale est de %d\n", total);
}

//does an average of the numbers in the array

double moyenneTableau(int tableau[], int tailleTableau)
{
        int i;
    int total = 0;
    for (i = 0 ; i < tailleTableau ; i++)
    {
    total += tableau[i];
    }
    int moyenne = 0;
    moyenne = total / tailleTableau;
    printf("La moyenne est de %d\n\n", moyenne);
}


//copies the origal array to a second array.
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{

    int i = 0;
    for (i = 0 ; i < tailleTableau ; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
        printf("Valeurs copiees: \n %d\n", tableauCopie[i]);
    }
printf("\n");
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
        int tableauaide = 0; //will be used to save a value to then give it back at another place of the array
        int i;
        for ( i = 0 ; i < tailleTableau -1 ; i++)
        {
            if (tableau[i] < tableau[i+1])
            {
                tableauaide = tableau[i+1];
                printf("tableauaide = %d\n", tableauaide);
                tableau[i] = tableau[i+1];
                tableau[i+1] = tableauaide;
                printf("%d\n", tableauaide);
            }


            }
}



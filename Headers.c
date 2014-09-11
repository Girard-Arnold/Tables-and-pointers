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
    double moyenne = 0.00;

    moyenne = total / tailleTableau;
    printf("La moyenne est de %lf\n\n", moyenne);


}

//copies the original array to a second array.
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{

    int i = 0;
    for (i = 0 ; i < tailleTableau ; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
        printf("Valeurs copiees:\n%d\n", tableauCopie[i]);
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
        int tableauaide = 0; //caches values.
/*          printf("%d\n",tableau[0]);
            printf("%d\n",tableau[1]);
            printf("%d\n",tableau[2]);
            printf("%d\n\n\n",tableau[3]);*/ //used for "debugging"?
        int i;
        int j; //pretty much i+1
        for ( i = 0 ; i < tailleTableau - 1 ; i++)
        {
        for ( j = i ; j < tailleTableau  ; j++)
        {
                if (tableau[i] > tableau[j]){// initiates the second loop inside the first one.
                /*printf("i = %d\n", i);*///ditto, debugging
                tableauaide = tableau[i];
                /*printf("tableauaide = %d\n", tableauaide);*///ditto
                tableau[i] = tableau[j];
                tableau[j] = tableauaide;
                //printf("%d\n\n", tableau[i]);

        }
            printf("%d\n",tableau[0]);
            printf("%d\n",tableau[1]);
            printf("%d\n",tableau[2]);
            printf("%d\n\n\n",tableau[3]);
        }


}
}


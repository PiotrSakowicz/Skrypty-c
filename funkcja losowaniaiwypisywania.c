#include <stdio.h>
#include <stdlib.h>

#define N 100


int losowanie( int *tab, int x)
{   srand(time(NULL))
;    int i;
    for(i=0; i<N; i++)
    tab[i]=rand() % 20 + 1;
}
int wypisz( int tab[N], int x)
{   int i;
    for(i=0; i<x; i++)
    printf ("%d \n", tab[i]);
}

int main()
{
 int tab[N];
 losowanie(tab, N);
 wypisz(tab, N);
}

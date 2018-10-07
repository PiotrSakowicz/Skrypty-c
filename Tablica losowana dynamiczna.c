/* Program pyta siê o rozmiar tablicy dynamicznej i j¹ losowo wype³nia */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int *td, n, i;
    printf("podaj rozmiar tablicy \n");
    scanf ("%d", &n);
    td=(int*) malloc ( n*sizeof (int));
    for( i=0; i<n; i++){
    td[i]=rand() %8
    ;
    printf("element %d = %d \n", i, td[i]);
    }

for( i=0; i<n; i++)
 free (td[i]);
free (td);
/* z zwolnieniem pamiêci */
}

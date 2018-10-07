/* Program sprawdza ile jest ma³ych liter
w podanym ci¹gu znaków (tablica sta³a do 99) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 100

int main()
{
printf ("wpisz tekst do sprawdzenia \n");
char tab[N];
fgets ( tab, N, stdin);
int i, male=0;
for(i=0; i<strlen(tab); i++)
if (islower (tab[i]))
male++;
printf ("malych : %d", male);
return 0;
}

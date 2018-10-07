#include <stdio.h>
#include <stdlib.h>

float przelicz(int cntr)
{
 float cale=cntr*0.393700787;
 return cale;
}


int main()
{
int cntr;
printf("podaj centymetry do przeliczenia \n");
scanf("%d", &cntr);
printf("%f",przelicz(cntr));

}

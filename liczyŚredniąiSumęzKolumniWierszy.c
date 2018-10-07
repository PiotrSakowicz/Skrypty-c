#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
int tab[N][N], i, j, suma;
float sredall;
srand(time(NULL));
for(i=0; i<N; i++){
 for(j=0; j<N; j++){
  tab[i][j]=rand() %10;
  printf("%4d", tab[i][j]);
 }
 printf("\n");
}
suma=0;
sredall=0;
for(i=0; i<N; i++){
 for(j=0; j<N; j++){
  suma= suma + tab[i][j];
 }
}
sredall=suma/(N*N);
printf("Srednia wszystkich elementow =%f, \nsuma rowna %d, \n", sredall, suma);

suma=0;
for(i=0; i<N; i++){
 for(j=0; j<N; j++){
  if (i==j)
  {suma= suma+tab[i][j];}
 }
}
sredall=(suma/N);
printf("Srednia elementow przekatnych=%3f, \nsuma rowna %3d, \n", sredall, suma);
for( i=0; i<N; i++){
 suma=0;
 for( j=0; j<N; j++)
 suma+=tab[i][j];
 sredall=(float)suma/N;
 printf ("Srednia %d-tego wiersza %3f\n", i, sredall);
}
sredall=(suma/N);
printf("Srednia elementow przekatnych=%3f, \nsuma rowna %3d, \n", sredall, suma);
for( j=0; j<N; j++){
 suma=0;
 for( i=0; i<N; i++)
 suma+=tab[i][j];
 sredall=(float)suma/N;
 printf ("Srednia %d-tej kolumny %3f\n", j, sredall);
}
}

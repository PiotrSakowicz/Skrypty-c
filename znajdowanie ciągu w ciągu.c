#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, j, k;
  char S[20]="amwambxy";
  char W[20]="bx";
  int ds = strlen(S);
  int dw = strlen(W);

for(i=0; i<ds; i++){
 for(j=0; j<dw; j++){
     printf(" i=%d, j=%d \n", i, j);
     if(S[i]==W[j]) i++;
 else break;
  }
 k=(i-dw)+1;
 if(j==dw){printf(" znaleziono,\n ciag o dlugosci %d , ma poczatek w elemecie %d ciagu S \n", j+1, i);
 break;}
  }
if(j!=dw)printf("Nie Znaleziono");
}

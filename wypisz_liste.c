#include <stdio.h>
#include <stdlib.h>

int l;

struct lista {
    int x;
    struct lista*nast;
             };
typedef struct lista ELEMENT;
typedef ELEMENT *LISTA;



void wypisz(LISTA pocz) {
    while (pocz) {
        printf ("%d", pocz->x);
        pocz=pocz->nast;
    }
}



LISTA wstaw_na_koniec (LISTA pocz, int l) {
    if(pocz==NULL){
        pocz=(LISTA)malloc(sizeof(ELEMENT));
        pocz->x=l;
        pocz->nast=NULL;
    }
    else {
        LISTA tmp=pocz;
        while(tmp->nast)
        tmp=tmp->nast;
        tmp->nast=(LISTA)malloc(sizeof(ELEMENT));
        (tmp->nast)->x=l;
        (tmp->nast)->nast=NULL;
    }
    return pocz; }



void wstaw_na_koniec2(LISTA*pocz, int l) {
    if(!(*pocz)) {
        *pocz=(LISTA)malloc(sizeof(ELEMENT));
        (*pocz)->x=l;
        (*pocz)->nast=NULL;
    }   else {
        LISTA tmp=(*pocz);
        while(tmp->nast)
        tmp=tmp->nast;
        tmp->nast=(LISTA)malloc(sizeof(ELEMENT));
        (tmp->nast)->x=l;
        (tmp->nast)->nast=NULL;
    }
}



void usun_liste(LISTA*pocz) {
    while(*pocz) {
        LISTA tmp=(*pocz)->nast;
        free(*pocz);
        (*pocz)=tmp;
    }
    *pocz=NULL;
}



int main()
{
    int i,b,x;
LISTA p=NULL;

printf("Podaj ilosc liczp\n");
scanf("%d/n", &b);

for(i=0;i<b;i++)
{
    printf("Podaj liczbe\n");
        scanf("%d/n", &x);
    }

wstaw_na_koniec2(&p, x);
wypisz(p);

    return 0;
}





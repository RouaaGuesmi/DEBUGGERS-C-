#include "point.h"
#include<stdio.h>
#include<string.h>
#include"Observer.h"
int main()
{
    Ajouter Observer O= {"rouge",1,0,0},r2= {"noir",2,1,1},r3;
    int x=ajouter("Observer.txt", r1);
    x=modifier("Observer.txt",1,r2 );
    
    if(x==1)
        printf("\nModifier Observer");
    else printf("\nechec Modification");
    x=supprimer("Observer.txt",1 );
    if(x==1)
        printf("\nSuppression de l'Obseervateur");
    else printf("\nechec Suppression");
    r3=chercher("Observeur.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}
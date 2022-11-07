#include "point.h"
#include<stdio.h>
#include<string.h>
#include"Observer.h"
int main()
{
    Ajouter Observer O
    int x=ajouter("Observer.txt", O1);
    x=modifier("Observer.txt",1,O2 );
    
    if(x==1)
        printf("\nModifier Observer");
    else printf("\nechec Modification");
    x=supprimer("Observer.txt",1 );
    if(x==1)
        printf("\nSuppression de l'Obseervateur");
    else printf("\nechec Suppression");
    O3=chercher("Observeur.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}

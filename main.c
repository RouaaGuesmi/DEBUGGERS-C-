#include <stdio.h>
#include <string.h>
#include"liste.h"

int main()
{
    liste p1= {"rouge",1,0,0},p2= {"noir",2,1,1},p3;
    int x=ajouter("liste.txt", p1);
    /*
    if(x==1)
        printf("\najout de liste avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("liste.txt",1,p2 );

    if(x==1)
    
    printf("\nModification de liste avec succés");
    else printf("\nechec Modification");
    x=supprimer("point.txt",1 );
    if(x==1)
        printf("\nSuppression de liste avec succés");
    else printf("\nechec Suppression");
    p3=chercher("liste.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}

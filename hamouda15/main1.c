#include <stdio.h>
#include <string.h>
#include"bureau_de_vote.h"

int main()
{
    BV B1;
    int x=ajouter("bureaudevote.txt", B1);
    /*
    if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("bureaudevote.txt",B1 );

    if(x==1)
        printf("\nModification de bureau de vote avec succés");
    else printf("\nechec Modification");
    x=supprimer("bureaudevote.txt",B1);
    if(x==1)
        printf("\nSuppression de bureau de vote avec succés");
    else printf("\nechec Suppression");
    p3=chercher("bureaudevote.txt",3 );
    if(p3.id==-1)
        printf("introuvable");
    return 0;
}

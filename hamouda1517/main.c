#include <stdio.h>
#include <string.h>
#include"BV.h"
int main()
{
    bureau b1= {1,10,1,01,"Morneg",101},b2= {2,15,2,02,"Ariana",102},b3;
    int x=ajouter("bvote.txt", b1);
    
    if(x==1)
        printf("\nAjout de bureau de vote avec succes");
    else printf("\nEchec ajout");
     
   x=modifier("bvote.txt",1,b2);
    if(x==1)
        printf("\nModification de bureau de vote avec succes");
    else printf("\nechec Modification");

    x=supprimer("bvote.txt",2);
    if(x==1)
        printf("\nSuppression de bureau de vote avec succes");
    else printf("\nechec Suppression");
    b3=chercher("bvote.txt",3);
    if(b3.id==-1)
        printf("introuvable");
    return 0;
}

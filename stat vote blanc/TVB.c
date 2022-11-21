#include <stdio.h>
#include "TVB.h"
#include<string.h>
int tvb(char *fileName)
{ 
user u;
Date dateNaissance;
int b=0;
FILE *file = fopen(fileName, "r");
 if (file != NULL) 
{
while (fscanf(file, "%s %s %s %s %d %d %d %u %d %s %s %d", u.prenom, u.nom, u.email, u.MotDePasse, &u.dateNaissance.annee,
                  &u.dateNaissance.mois, &u.dateNaissance.jour, &u.role, &u.cin,u.sex,u.numbv,&u.typedevote) != EOF)
{
if (u.typedevote == 0 && (u.role,"4") == 0)
b++;
}
}
fclose(file);
return b;}


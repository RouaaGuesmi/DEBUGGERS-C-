#include <stdio.h>
#include "stat.h"
#include<string.h>
int nbElBv(char *fileName ,int *a)
{ 
char nbv[30];
user u;
Date dateNaissance;
int b=0;
printf("Enter numero de bureau de vote: ");
scanf("%s",nbv);
FILE *file = fopen(fileName, "r");
 if (file != NULL) 
{
while (fscanf(file, "%s %s %s %s %d %d %d %u %d %s %s", u.prenom, u.nom, u.email, u.MotDePasse, &u.dateNaissance.annee,
                  &u.dateNaissance.mois, &u.dateNaissance.jour, &u.role, &u.cin,u.sex,u.numbv) != EOF)
{
if (strcmp(nbv, u.numbv) == 0 && (u.role,"4") == 0)
b++;
}
*a=b;
}
fclose(file);
return b;}


#include "point.h"
#include<stdio.h>
int ajouter(char bureaudevote [], BV B)
{
    FILE * f=fopen(bureaudevote, "a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %s \n",B.id,B.capacite,B.adresse);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id , int * capacite, BV nouv  , char * bureaudevote [])
{
Point p;
    FILE * f=fopen(bureaudevote, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %d ",&B.id,&B.adresse,&B.capacite)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %s %d \n",B.id,B.adresse,B.capacite);
else

  fprintf(f2,"%d %s %d %d\n",nouv.id,nouv.adresse,nouv.capacite);

}
        fclose(f);
        fclose(f2);
remove(bureaudevote);
rename("nouv.txt", bureaudevote);
        return 1;
    }
  
}

int supprimer(int * id , char bureaudevote [])
{
 p;
    FILE * f=fopen(bureaudevote, "r");
    FILE * f2 =fopen("nouv.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %d ",&B.id,&B.adresse,&B.capacite)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %s %d \n",B.id,B.adresse,B.capacite);

}
        fclose(f);
        fclose(f2);
remove(bureaudevote);
rename("nouv.txt", bureaudevote);
        return 1;
    }
}

Point chercher(int id, char * bureaudevote)
{
BV B; int tr=0;
    FILE * f=fopen(bureaudevote, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %s %d ",&B.id,&B.adresse,&B.capacite)!=EOF && tr==0)
{if(id==B.id)
tr=1;
}
}
if(tr==0)
B.id=-1;
return B;

}

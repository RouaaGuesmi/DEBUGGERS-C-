#include "Observer.h"
#include<stdio.h>
int ajouter( char *filename,observer O)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %s\n",nom,prenom,appartenace,nationality);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier( char * filename,int id ,observer nouveau)
{
int ch=0;
obderver O;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %s",&nom,&prenom,&nationality;&appartenance)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %s %s\n",);
else

  fprintf(f2,"%s %s %s %s\n",nom,prenom,appartenace,nationality);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
int ch=;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%s %s %s %s",&nom,&prenom,&nationality;&appartenance!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%s %s %s %s\n",nom,prenom,appartenace,nationality);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

Observer supprimer(intd, char * filename)
{
Point p; int ch;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%s %s %s %s",&nom,&prenom,&nationality;&appartenance!=EOF && tr==0)
{if(id==p.id)
tr=1;
}
if(ch==0)}
p.id=-1;
return r;

}

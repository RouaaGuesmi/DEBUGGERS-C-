#include "Observer.h"
#include<stdio.h>
int ajouter( char *filename,observer O)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
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
while(fscanf(f,"%d %s %d %d",&p.id,p.couleur,&p.x,&p.y)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
else

  fprintf(f2,"%d %s %d %d\n",nouv.id,nouv.couleur,nouv.x,nouv.y);

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
while(fscanf(f,"%d %s %d %d",&p.id,p.couleur,&p.x,&p.y)!=EOF)
{
if(p.id!=id)
        fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);

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
while(fscanf(f,"%d %s %d %d",&p.id,p.couleur,&p.x,&p.y)!=EOF && tr==0)
{if(id==p.id)
tr=1;
}
if(ch==0)}
p.id=-1;
return r;

}
#include liste.h"

int ajouter(char * filename, liste p )
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
int modifier( char * filename, int id, liste nouv )
{
    int tr=0;
    liste p ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%d %s %d %d\n",nouv.id,nouv.couleur,nouv.x,nouv.y);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    liste p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
liste chercher(char * filename, int id)
{
    liste p;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %d %d\n",&p.id,p.couleur,&p.x,&p.y)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}


#include "BV.h"
#include  <stdio.h>
int ajouter(char * filename, bureau p)
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    { fprintf(f,"%d %d %d %d %s %d\n",p.id,p.cap_elec,p.cap_obs,p.salle,p.b_adr,p.id_agentb);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, bureau nouv )
{
    int tr=0;
    bureau p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d",&p.id,&p.cap_elec,&p.cap_obs,&p.salle,p.b_adr,&p.id_agentb)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%d %d %d %d %s %d\n",nouv.id,nouv.cap_elec,nouv.cap_obs,nouv.salle,nouv.b_adr,nouv.id_agentb);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s %d\n",p.id,p.cap_elec,p.cap_obs,p.salle,p.b_adr,p.id_agentb);
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
    bureau p ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %d",&p.id,&p.cap_elec,&p.cap_obs,&p.salle,p.b_adr,&p.id_agentb)!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
            fprintf(f2,"%d %d %d %d %s %d\n",p.id,p.cap_elec,p.cap_obs,p.salle,p.b_adr,p.id_agentb);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
bureau chercher(char * filename, int id)
{
    bureau p ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s %d",&p.id,&p.cap_elec,&p.cap_obs,&p.salle,p.b_adr,&p.id_agentb)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p ;
}


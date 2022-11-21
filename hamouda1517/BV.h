#ifndef FONCTIONS_H_
#define FONCTIONS_H_
typedef struct 
{
int id;
int cap_elec;
int cap_obs;
int salle;
char b_adr[20];  
int  id_agentb;
} bureau ;


int ajouter(char *, bureau);
int modifier( char *, int, bureau );
int supprimer(char *, int );
bureau chercher(char *, int);
#endif

#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct
{
int id;
int capacite;
char adresse [50];
}BV;

int ajouter(char bureaudevote [], BV B);
int modifier(int id , int * capacite, BV nouv  , char * bureaudevote []);
int supprimer(int * id , char bureaudevote []);
BV chercher(int id, char * bureaudevote);

#endif // BV_H_INCLUDED

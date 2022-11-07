#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

typedef struct
{
int id;
char nom,prenom,Nationality,sexe,Appartenance; [20];
}Observer;

int ajouter(char*,Observer);
int modifier(char*,int,Observer);
int supprimer(int id, char * filename);
Observer chercher(char*,int);



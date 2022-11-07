#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char couleur [20];
    int id, x,y;
} liste;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, liste );
int modifier( char *, int, liste);
int supprimer(char *, int );
liste chercher(char *, int);

#endif // liste_H_INCLUDED

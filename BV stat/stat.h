typedef struct Date 
{
 int annee;
 int mois;
 int jour;
}Date;
enum Role
{
condidat,
observateur,
agent,
electeur,
};
typedef struct user
{
char prenom[30];
char  nom[100];
char  email[100];
char  MotDePasse[100];
Date dateNaissance ;
enum Role role;
int cin;
char sex[30];
char numbv[20];
}user;
int nbElBv(char *fileName ,int *a);

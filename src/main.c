#include <ansi_c.h>
#include "my_header.h"
#include <userint.h>
#include <string.h>


int main(void)
{
char prenom  [100];
char nom  [100];
char annee [100] ;
int age;



printf ("Prenom:");
scanf("%s",prenom);
printf ("Nom:");
scanf("%s",nom);
printf ("Annee de naissance:");
scanf("%s",annee);
age = 2018-atoi(annee);

printf ("Je m'appelle %s %s et j'ai %d ans",prenom ,nom ,age);
getchar();

}

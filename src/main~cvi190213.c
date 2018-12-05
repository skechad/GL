#include <ansi_c.h>
#include "my_header.h"
#include <userint.h>
#include <string.h>


int main(void)
{
char prenom  [100];
char nom  [100];
unsigned int annee [100],age;



printf ("Prenom:");
scanf("%s",prenom);
printf ("Nom:");
scanf("%s",nom);
printf ("Annee de naissance:");
scanf("%lu",annee);
atoi(annee)=age;
age=2018


printf ("Je m'appelle %s %s et j'ai %d ans",prenom ,nom ,age );
getchar();

}

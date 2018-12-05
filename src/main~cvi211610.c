#include <ansi_c.h>
#include "my_header.h"
#include <userint.h>

int main(void)
{
char prenom  [100];
char age  [100];
char nom  [100];
unsigned long int annee [100];


printf ("Prenom:");
scanf("%s",prenom);
printf ("Nom:");
scanf("%s",nom);
printf ("Annee de naissance:");
scanf("%s",annee);



printf ("Je m'appelle %s %s et j'ai %s ans",prenom ,nom ,age );
getchar();

}

#include "TP_lib.h"
#include "my_header.h"
#include <stdio.h>


int main(void)
{
short resultat, i=0;
while (i<10)
{
resultat = LancerDe ();
i++;
printf("Le resultat est %d ",resultat);
getchar();
}
}


#include "TP_lib.h"

void main (void)
{
unsigned short int points = 0;
unsigned short int resultat= 0;
    do
    {
        resultat = LancerDe ();
         if ( resultat == 2 || resultat == 4 || resultat == 6)
         {
             points = points + resultat;
         }

         else if ( resultat == 3)

         {

             points = points * 2 ;

         }

         else

         {
         points = points - 2 ;
         }
    }

    while (resultat != 1);

}

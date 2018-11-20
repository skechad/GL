#include <ansi_c.h>
#include "my_header.h"

unsigned char bin[10] = {200 , 150 , 129 , 114 , 118, 120 , 145 , 149 , 127 , 114};
short seuil = 155 ,seuilh =200,seuilb=-100, i=0;
short sat[10];

int main(void)
{
for (i=0 ; i<10 ;i++)
{
sat[i]=rand()%400-200;
if (bin[i] >= seuil )
{
bin[i] =1;

}

else 
{
bin[i] =0;

}	
}

    return 0;
}

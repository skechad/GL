#include "my_header.h"

unsigned char bin[10] = {200 , 150 , 129 , 114 , 118, 120 , 145 , 149 , 127 , 114};
int seuil = 155 , i=0;

int main(void)
{
for (i=0 ; i<10 ;i++)
{

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

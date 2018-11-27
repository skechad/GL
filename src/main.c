//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "stdio.h"
#include "TP_lib_suite.h"

int main(void)
{
unsigned char loto[6]={44,32,24,12,25,8};
unsigned char loto2[6]={50,50,50,50,50,50};
unsigned char i=0,h=0,Gain=0,tirage=0,best=0,t=0,essaie=0;


for (tirage=0;tirage <100;tirage++)
{
initialiserTirage();
for (i=0;i<6; i++)
{
loto2[i]=tirerNumero();

for(h=0;h<6;h++)
{
if(loto[h]==loto2[i])
Gain++;
}

if (h==6)
{
t=Gain;
Gain=0;
}
}

if (best<t)
{
best=t;
essaie=tirage;
}

}	
printf("Best score = %d Essaie = %d",best,essaie);
getchar();
    return 0;
}

//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "stdio.h"
#include "TP_lib_suite.h"

int main(void)
{
unsigned char loto[6]={44,32,24,12,25,8};
unsigned char loto2[6]={50,50,50,50,50,50};
unsigned char i=0,h=0,Gain=0;




for (i=0;i<6; i++)
{
loto2[i]=tirerNumero();

for(h=0;h<6;h++)
{
if(loto[h]==loto2[i])
Gain++;
}

}
	
	
    return 0;
}

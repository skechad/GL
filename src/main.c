#include <ansi_c.h>
#include "my_header.h"
#include <stdlib.h>

unsigned char bin[10] = {200 , 150 , 129 , 114 , 118, 120 , 145 , 149 , 127 , 114};
int dist[10] = {200 , 150 , 129 , 114 , 118, 120 , 145 , 149 , 127 , 114} ,miroir[6]={1,2,3};
short seuil = 155 ,seuilh =200,seuilb=-100, i,i2,i3,h,i4,i5;
short sat[10], a[5]={1,5,9,8,11},b[5];

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
for (i2=0 ; i2<10 ;i2++)
{
sat[i2]=rand()%400-150;
if (sat[i2]<seuilb)
{
sat[i2] = seuilb;
}

else if(sat[i2]>seuilh)
{
sat[i2] = seuilh;	
}
}

for (i3=0 ; i3<10 ;i3++)
{
h=i3-1; 
if (i3>0)
{
h=i3-1;
while(h>=0)
{
dist[i3]=dist[i3]-dist[h];
h--;
}
}
else
{
dist[i3]=dist[i3];
}
}
for(i4=0;i4<5;i4++)
{
b[i4]=a[4-i4];
}
for(i5=0;i5<3;i5++)
{
miroir[i5+3]=miroir[2-i5];
}
return 0;
			
}
}

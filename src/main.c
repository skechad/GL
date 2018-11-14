#include "my_header.h"
#include <stdio.h>
#include "stdlib.h"

unsigned short s1=3,n=2,s2=3,i=0,y=0;
unsigned char s3,nb,z=0,b,s4,a;


int main(void)
{
while (s2<9876 && z<12 && b<20)
{
if(a%3==0 || a%7==0)
{
s4= s4+a;
b++;
}
a++;

nb=rand()%10+1;
s3=s3+nb ;
z++;
i=s2;
y=s1;
s1=s1+3*n;
s2=s2+3*n;
n++;
printf("s1 = %d s2= %d  s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}

while (s2>9876 && z<12 && b<20)
{
if(a%3==0 || a%7==0)
{
s4= s4+a;
b++;
}
a++;

nb=rand()%10+1;
s3=s3+nb ;
z++;
y=s1;
s1=s1+3*n;
n++;
printf("s1 = %d s2= %d s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}
while (s2<9876 && b<20)
{
if(a%3==0 || a%7==0)
{
s4= s4+a;
b++;
}
a++;

i=s2;
y=s1;
s1=s1+3*n;
s2=s2+3*n;
n++;
printf("s1 = %d s2= %d  s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}

while (s2>9876 && b<20)
{
if(a%3==0 || a%7==0)
{
s4= s4+a;
b++;
}
a++;

y=s1;
s1=s1+3*n;
n++;
printf("s1 = %d s2= %d s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}



while (s2<9876 && z<12)
{
nb=rand()%10+1;
s3=s3+nb ;
z++;
i=s2;
y=s1;
s1=s1+3*n;
s2=s2+3*n;
n++;
printf("s1 = %d s2= %d  s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}

while (s2>9876 && z<12)
{
nb=rand()%10+1;
s3=s3+nb ;
z++;
y=s1;
s1=s1+3*n;
n++;
printf("s1 = %d s2= %d s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}
while (s2<9876)
{
i=s2;
y=s1;
s1=s1+3*n;
s2=s2+3*n;
n++;
printf("s1 = %d s2= %d  s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}

while (s2>9876)
{
y=s1;
s1=s1+3*n;
n++;
printf("s1 = %d s2= %d s3= %d s4= %d\n",y,i,s3,s4);
printf("appuyer sur entrer\n");
getchar();
}
}

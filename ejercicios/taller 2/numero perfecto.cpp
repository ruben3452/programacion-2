#include<stdio.h>
#include<iostream>

int main()
{
int fuu=1,chuu=1,kon=0;
while(fuu<=10000)
{
while(chuu<=(fuu/2))
{
if(fuu%chuu==0)
    kon=kon+chuu;
    chuu=chuu+1;
}
if(fuu==kon)
printf("es perfecto %d\n",fuu);
fuu=fuu+1; 
chuu=1;
kon=0;
	    }
system("pause");
	}

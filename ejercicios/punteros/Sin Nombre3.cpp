#include<stdio.h>
#include<iostream>
int main(){
    
    int *i,**b,a,j,g;
printf("ingrese el numero: ");
scanf("%d",&g);
a=1; 
i=&a;
for(j=1;j<=g;j++){
*i*=j;
}
b=&i;
printf("%d\n",**b);

system("pause");
}

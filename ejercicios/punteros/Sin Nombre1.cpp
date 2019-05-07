#include<stdio.h>
#include<iostream>
int main(){
int *i,**b,a,j;
a=0; 
i=&a;
for(j=1;j<=100;j++){
*i+=j;
}
b=&i;
printf("%d\n",**b);

system("pause");
}

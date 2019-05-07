#include<stdio.h>
#include<iostream>

#include <time.h>


int main(){
    int i,v;
     int h[1000];
srand(time(NULL)); 
for(i=0; i<v; i++){
v=rand()% 500000;   

h[i]=v;

printf("%d\n",h[i]);
}
system ("pause");
}

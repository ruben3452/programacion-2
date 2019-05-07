#include<stdio.h>
#include<iostream>
int main(){
int i,cont;
cont=0;
for(i=-1000; i<=80000; i++){
if(i% 7==0){
cont=cont+1;
}
}
printf("hay: %d",cont,"multiplo de 7");
return 0;
}
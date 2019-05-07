#include<stdio.h>
#include<iostream>
int main(){
    int n,band,i;
    printf("entre el numero: ");
    scanf("%d",&n);
    band=0;
    if(n==1){
    band=1;
}
else{
     if(n==2 && n==3){
     band=0;
}
else{
     for(i=2;i<n;i++){
     if(n%i==0){
     band=1;             
     i=n+1;
}
}
}
}
if(band==1){
printf("no es primo \n");}
else{
printf("es primo \n");
}
system("pause");
}
       
       
    

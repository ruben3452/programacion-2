#include<stdio.h>
#include<iostream>
int  facto(int n){
     int i,fact=1;
     if(n==0){
              return(1);
              }
              else{
              for(i=1;i<=n;i++){
              fact=fact*i;
              } 
              }
              return(fact);
              } 
int main(){
     
    int i,r,f;  
                
     for(i=10;i>=0;i--){
    r=facto(i);                   
printf("factorial de %d",i);
printf(": %d\n",r);
}
system("pause");
       return 0;
       }

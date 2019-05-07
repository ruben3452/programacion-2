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
                int m,p;
                printf("ingrese el numero: ");
                scanf("%d",&m);
                
                p=facto(m);
                printf("la potencia es:%d\n ",p);
                system("pause");
                }                  

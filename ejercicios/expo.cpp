#include<stdio.h>
#include<iostream>
int potencia(int base , int exp){
    int i,pot=1;
    if(exp==0){
                return (1);
                }
                else{for(i=1;i<=exp;i++){
                pot=pot*base;
                }
                }
                return (pot);
                }
                int main(){
                int m,k,p;
                printf("ingrese la base: ");
                scanf("%d",&m);
                printf("ingrese el esponente: ");
                scanf("%D",&k);
                p=potencia(m,k);
                printf("la potencia es:%d\n ",p);
                system("pause");
                }

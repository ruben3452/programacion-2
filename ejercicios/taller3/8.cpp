#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe 3 numero y retorne cu de ellos es mayor. \ndira la respuesta del numero mayor ingresado (1,2,3) \n");
     system(0);
     }
int numer (int x ,int y ,int z){

if(x>=y && x>=z){
        return(1);}
else
if(y>=z && y>=x){
        return(2);}
else
if(z>=y && z>=x){
        return(3);}
}
int main(){
texto();
int a,b,c,d;
   printf("1: ingrese el primer  numero: ");
   scanf("%d",&a);
   printf("2: ingrese el sengundo numero: ");
   scanf("%d",&b);
   printf("3: ingrese el tersero  numero: ");
   scanf("%d",&c);
   d=numer(a,b,c);
   printf("el numero mayor es el: %d\n",d);
   system("pause");
}
   

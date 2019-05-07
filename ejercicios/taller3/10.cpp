#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que calcula los numeros perfectos del 1 al numero deseado \n");
     printf("si el numero es ( 1 ) es perfecto \n");
     printf("si el numero es ( 0 ) no es perfecto \n");
     system(0);
     }
int perfg(int y){
    int h,puf=0;
    for(h=1;h<y;h++){
        if(y%h==0){
           puf=puf+h;
           }
           }
           if(puf==y){
           return(1);}
           else{
                return(0);
           }}
int main(){
texto();
int z,k,h;
printf("ingrese un numero: ");
scanf("%d",&z);
for(h=1;h<=z;h++){
k=perfg(h);
if(k==1){
printf("el numero es perfecto: %d\n",k);}
else{
printf("el numero es perfecto: %d\n",k);}
if(k==1){
printf("el numero leido es: %d\n",h);}
else{
printf("el numero leido es: %d\n",h);}
system("pause");
}
}












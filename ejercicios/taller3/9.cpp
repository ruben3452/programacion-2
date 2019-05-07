#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe un numero entero y determine si es un numero primo o no del 1 al 100000   \n");
     system(0);
     }
int primo (int p){
int i;
for(i=1;i<p;i++){
        if(i%3==0){
                   printf("%d,",i);}
                   }
}
int main(){
   texto();
   int g,l;
   g=100000;
   l=primo(g);
   system("pause");
}
        
                       

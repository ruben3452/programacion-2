#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe un numero entero y retorna la siguiente suma \n(1/1+1/2+1/3+1/4+...+1/n) siendo (n) el numero ingresado \n");
     system(0);
     }
float sufam(int w){
    float q,sug=0;
    for(q=1;q<=w;q++){
       sug=1/q + sug;
       }
       return(sug);
       }
int main(){
    texto();
    int u;
    float c;
    printf("ingrese el numero de la suma deseada: ");
    scanf("%d",&u);
    c=sufam(u);
    printf("%.2f",c);
    system("pause");
}              

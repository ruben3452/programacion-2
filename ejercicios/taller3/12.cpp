#include<stdio.h>
#include<iostream>
#define pi 3.141592654
void texto (void){
     printf("programa que calcula el area de un circulo. ingresando el redio de dicho circulo \n");
     system(0);
     }
float area_circulo (int radi){
    double rade;
    rade=pi*(radi*radi);
    return(rade);
}
int main(){
    texto();
    int p;
    float d;
    printf("ingrese el radio a calcular: ");
    scanf("%d",&p);
    d=area_circulo(p);
    printf("el area del circulo es: %.3f\n",d);
    system("pause");
}
    

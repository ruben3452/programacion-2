#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe como parametro un numero y retorne su ultimo digito \n");
     system(0);
     }
int numd(int f){
   int dividir;
     dividir=(f % 10);
   return(dividir);
}
int main(){
    texto();
    int d;
    float l;
    printf("ingrese el numero: ");
    scanf("%d",&d);
    l=numd(d);
    printf("%.f\n",l);
system("pause");
}


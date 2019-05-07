#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe como parametro dos numeros enteros y retorne la suma de 1 \nasta el producto de los dos numeros \n");
     system(0);
     }
int suma(int d){
int s;
int suma2=0;
     for(s=1;s<=d;s++){
     suma2=suma2+s;
    }
    return(suma2);
}
int main(){
texto();
int z,l,x,s;
     printf("ingrese el primer numero: ");
     scanf("%d",&z);
     printf("ingrese el segundo numero: ");
     scanf("%d",&x);
     s=(z + x);
     l=suma(s);
     printf("la suma de los dos numeros %d\n",s);
     printf("suma de producto de los dos numeros: %d\n",l);
system("pause");
      }

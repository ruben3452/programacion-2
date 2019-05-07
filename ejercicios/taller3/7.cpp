#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que muestra los primeros numeros de la serie fibonacci \n");
     system(0);
     }
int fibo(int r){
int v,sum=0,a=0,b=1,fu;
for (v=0;v<r;v++){
sum = a + b;
   a = b;
   b = sum;
   printf("%d,",a);
}
 }
int main(){
    texto();
    int f,k;
    f=10;
    k=fibo(f);
    system("pause");
}

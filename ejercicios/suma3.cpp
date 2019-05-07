#include<stdio.h>
#include<iostream>
int suma(int h,int j){
    int z;
    z=h+j;
    return(z);
    }
int main(){
    
    
    int a,b,o;
    printf("ingrese unu numero a: ");
    scanf("%d",&a);
    printf("ingrese unu numero b: ");
    scanf("%d",&b);
  o=suma(a,b);
  printf("%d\n",o);
  system("pause");
  }

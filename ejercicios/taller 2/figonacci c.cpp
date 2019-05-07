#include<stdio.h>
#include<iostream>

int main (){
int v,d,sum=0,a=0,b=1;   
  printf("ingrese el numero: ");
  scanf("%d",&d);
  
  for (v=0;v<d;v++)
  {
    printf("%d,",a);
    sum = a + b;
    a = b;
    b = sum;
  } 
  getchar();
  return 0;
} 

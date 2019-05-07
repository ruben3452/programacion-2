// declarar y llamar un vector de longitud 10 por teclado , luego mostrar los valores entrados 
#include<stdio.h>
#include<iostream>
int main(){
  int s[10];
  int i,d;
   printf("ingrese el numero");
 for(i=0;i<10;i++){
 scanf("%d",&s[i]);
}
 for(d=0;d<10;d++){

printf("%d",s[d]);
}
system("pause");
}

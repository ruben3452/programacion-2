// declarar y llamar un vector de longitud 10 por teclado , mostra los numeros pares que se musetran en el vector 
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
if(s[d] %2==0){
printf("%d\n los numeros pares son: ",s[d]);
}
}
system("pause");
}


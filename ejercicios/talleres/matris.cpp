//declarar una matris de 3x3,llenarla por teclado , mostrar su contenido por pantallla
#include<stdio.h>
#include<iostream>
int main(){
  int f[3][3],s,d;
  printf("ingrese el numero");
  for(s=0;s<3;s++){
    for(d=0;d<3;d++){
      scanf("%d",&f[s][d]);
      
    }
  
  }
  for(s=0;s<3;s++){
    for(d=0;d<3;d++){
  printf("  ");
  printf("%d",f[s][d]); 
  }
  printf("\n");
  printf("\n");
  }
  printf("\n");
  system ("pause");
}

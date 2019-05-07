#include<stdio.h>
#include<iostream>
int main(){
  int s[10];
  int i,d,suma=0;
  printf("ingrese el numero");
  for(i=0;i<10;i++){
 scanf("%d",&s[i]);
}
for(d=0;d<10;d++){
  suma+=s[d];
}
  printf("%d\n suma ",suma);


system("pause");
}

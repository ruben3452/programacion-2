// implementar una funcion  que reciba un vector de 10 pocisionesy retorne 
//la suma de los cuadrados de sus componentes 
#include<stdio.h>
#include<iostream>
int main(){
int v[10]={1,2,3,4,5,6,7,8,9,10},d,s=0;
for(d=0;d<10;d++){
s=v[d]*v[d]+s;

}
printf("numeros almasenados en el vector (1,2,3,4,5,6,7,8,9,10)\n");
printf("la suma de los cuadrados del vector son: %d\n",s);

system("pause");
}

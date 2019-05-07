#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>
#include <time.h>
///-----------------------------------burbuja----------------------------------
///esta funcion comprueba los numeros y los organisa 
int *BurbujaM(int *A, int r)
{
int aux,intercambio = 1;
for( int i = r - 1 ; i > 0 && intercambio == 1; i-- )
{
intercambio = 0;
for( int j = 0 ; j < i ; j++ )
if ( A[j] > A[j + 1])
{
intercambio = 1;
aux = A[j];
A[j] = A[j+1];
A[j+1] = aux;
}
}
return A;
}
///-------------------------------el main------------------------------------
int main()
{
int d,i,*s;
int v[100];
printf("ingrese la cantidad de numeros a evaluar: ");
scanf("%d",&d);

printf("digite los numeros a ordenar: \n");
for(i=0; i<d; i++){
scanf("%d",&s[i]);
}
s=BurbujaM(s,i);               
printf("numeros ordenados son: \n");
for(i=0; i<d; i++){
printf("%d , ",s[i]);
}
printf("\n");
system("pause");
}

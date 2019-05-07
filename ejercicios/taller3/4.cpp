#include<stdio.h>
///#include<iostream>
void texto (void){
     printf("programa que recibe un numero entero y determina si la suma de sus digitos es \nmultiplo de 5 \n");
     getchar();
     }
int suma (int f){
    int div1,div2,suma1;
    div1=(f % 10);
    div2=f/10;
    suma1=div1+div2;
return (suma1);
}
int main(){
    texto();
    int g,h,cont=0;
    printf("ingrese el numero: ");
    scanf("%d",&g);
    h=suma(g);
    if(h%5==0){
    cont=cont+1;
}
printf("suma de los dos digitos: %d\n",h);
printf("multiplos de 5 son: %d\n" ,cont);

getchar();
}

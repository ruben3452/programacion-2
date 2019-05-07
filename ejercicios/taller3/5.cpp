#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe el valor de temperatura en grados celsius y lo comvierte en grados fahrenheit \n");
     system(0);
     }
float comver (float c){
    float comv=0;
    comv=c*9/5+32;
    return(comv);
}
int main(){
texto();
float j,d;
printf("ingrese los grados celsius: ");
scanf("%f",&d);
j=comver(d);
printf("grados fahrenheit: %.1f\n",j);
system ("pause");
}

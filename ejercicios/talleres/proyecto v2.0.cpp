#include<stdio.h>
#include <math.h>
#include<iostream>
#define PI 3.141592654
////////////////////////////////////////////////////////////////////////////////
float Coseno(float x){
double pots=2,nume,dens=1.0,k,sum2;
int g=-1,i;

k=PI*x/180;
sum2=1;
nume=k*k;

for(i=0;i<5;i++){
dens*=pots*(pots-1.0);
sum2+=(nume/(dens*g));
g*=-1;
pots+=2;
nume*=k*k;
}
return sum2;
}
////////////////////////////////////////////////////////////////////////////////   
int fivo(int d){  
int v,sum=0,a=0,b=1; 
for (v=0;v<d;v++)
{
printf("%d,",a);
sum=a+b;
a=b;
b=sum; 
}
}  
////////////////////////////////////////////////////////////////////////////////
int comp(int p){
int z[20]={1,2,3,2,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},h;
for(h=0;h<20;h++){
if(z[h]==p){return (1);
}
}
return(0);
}
////////////////////////////////////////////////////////////////////////////////
int matrix(int v[4][4] ,int v2[4][4]){
int suma[0][0],i,j;
for(i=0;i<4;i++){
for(j=0;j<4;j++){
suma[i][j]=(v[i][j] + v2[i][j]);
printf(" %d ",suma[i][j]);
}
printf("\n");
printf("\n");
}
}
////////////////////////////////////////////////////////////////////////////////




///**************************************************************************///
int main(){
int opcion,salir,suma;
int ren2,d,ren3,ren4,b,n,p,f[4][4],s,q,g[4][4],h,j;
float x2,ren;
///--------------------------------------------------------------------------///    
do{    
    printf("******************************************************************************\n");
    printf("*                                                 P                          *\n");
    printf("*                                                  R                         *\n");
    printf("*                  P                                O                        *\n");
    printf("*                   R                D               G                       *\n");
    printf("*                    O                 E              R                      *\n");
    printf("*                     Y                                A                     *\n");
    printf("*                      E                                M                    *\n");
    printf("*                       C                                A                   *\n");
    printf("*                        T                                C                  *\n");
    printf("*                         O              II                I                 *\n");
    printf("*                                                           O                *\n");
    printf("*                                                            N               *\n");
    printf("******************************************************************************\n");
    printf("*                           1.Calcular coseno                                *\n");
    printf("*                           2.Serie de Fibonacci                             *\n");
    printf("*                           3.Busqueda binaria                               *\n");
    printf("*                           4.Sumar dos matrices                             *\n");
    printf("*                           5.Salir                                          *\n");
    printf("******************************************************************************\n");
    printf("Digite su opcion: \n");
    scanf("%d",&opcion);

///--------------------------------------------------------------------------///
 
switch(opcion){
case 1:
printf("(1)calculo de coseno\n");
printf("ingrese el angulo que desea calcular: ");
scanf("%f",&x2);
ren=Coseno(x2);
printf("%f\n",ren);
printf("(6)retornar al menu principal\n");
scanf("%d",&opcion);
break; 
///--------------------------------------------------------------------------///

case 2:
printf("(2)serie de fibbonacci\n");
printf("ingrese el numero que desea calcular: ");
scanf("%d",&d);
ren2=fivo(d);
printf("\n(6)retornar al menu principal\n");
scanf("%d",&opcion);
break;
///--------------------------------------------------------------------------///

case 3:
printf("(3)busqueda binaria\n");
printf("ingrese un numero: ");
scanf("%d",&p);
ren3=comp(p);
if(ren3==1){
printf("el numero si esta en el vetor \n");} 
else{
printf("el numero no esta en el vetor \n");} 
printf("(6)retornar al menu principal\n");
scanf("%d",&opcion);
break; 
///--------------------------------------------------------------------------///


case 4:
printf("(4)sumar dos matrises\n");
printf("ingrese los numeros de la primer matris ");
for(s=0;s<4;s++){
for(q=0;q<4;q++){
scanf("%d",&f[s][q]);
}
}
printf("ingrese los numeros de la segunda matris");
for(s=0;s<4;s++){
for(q=0;q<4;q++){
scanf("%d",&g[s][q]);
}
}
ren4=matrix(f,g);
printf("\n");
printf("(6)retornar al menu principal\n");
scanf("%d",&opcion);
break; 
///--------------------------------------------------------------------------///
case 5:
exit(0);
break; 
///--------------------------------------------------------------------------///
}
}while(opcion=6);
system("pause");
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
int d,bleach=0,e,a,mes,salario,bleach2=0;

printf("ingrese la edad del empleado: ");
scanf("%d",&d);
printf("ingrese los años que lleva en la empresa: ");
scanf("%d",&a);

for(e=0;e<=a;e++){
bleach=(e + bleach);

}
mes=30;
salario=100;
bleach2=( (salario + bleach + d)* mes);
    
printf("$ %d \n ",bleach2);
    
    system("pause");
       return 0;
       }

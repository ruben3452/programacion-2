#include<stdio.h>
#include<iostream>
int main(){
    int x,y,z;
    printf("el primer numero: ");
scanf("%d",&x);

printf("el segundo numero: ");
scanf("%d",&y);

printf("el terser numero: ");
scanf("%d",&z);
if(x>=y && x>=z)

{printf("el primero es mayor: ");
}
else
if(y>=z && y>=x)
{ printf("el segundo es mayor: ");
}
else
if(z>=y && z>=x)
{printf("el tersero es mayor: ");
}

system("pause");
return 0;

}

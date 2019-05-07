#include<stdio.h>
#include<iostream>
int main(){
    int *p,a,b;
    a=16;
    p=&a;
    *p=85;
    b=*p;
    *p=(*p)-(*p)+6;
    b=(*p)*(*p+6);
    *p*=1;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",b);
    system("pause");
} 

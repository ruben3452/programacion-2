#include<stdio.h>
#include<iostream>
int main(){
    int **h,*p,a,b;
    a=2;
    b=a;
    p=&a;
    *p=1+*p;
    h=&p;
    **h=(**h)+(*p+**h)+4;
    **h=0;
    b=**h;
    printf("%d\n",a);
    printf("%d\n",b);
    system("pause");
    }
    

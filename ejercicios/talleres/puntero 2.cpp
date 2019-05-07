#include<stdio.h>
#include<iostream>
int main(){
    int *p,*b,a,c;
    a=5;
    p=&c;
    *p=1;
    *b=*p+8;
    c*=(*p)+(*b)+8;
    *b=a-*p;
    a=*p-a;
    printf("%d\n",a);
    printf("%d\n",c);
    printf("%d\n",p);
    printf("%d\n",b);
    system("pause");
}
    

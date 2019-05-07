#include<stdio.h>
#include<iostream>
int main(){
    int *m,p,x;
    x=6;
    m=&x;
    *m=3;
    p=(*m)*(*m+1)+2;
    *m=0;
    printf("%d\n",x);
    printf("%d\n",*m);
    printf("%d\n",p);
    printf("%d\n",m);
    system("pause");
}

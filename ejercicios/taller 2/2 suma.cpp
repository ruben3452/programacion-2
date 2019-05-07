#include<stdio.h>
#include<iostream>
int main(){
    int n,xumax=0,i;
    printf("infrese el valor de n: ");
    scanf("%d",&n);
 for(i=0;i<=n;i++){
xumax=(2*(i)+xumax);
}
printf("%d",xumax);
    system("pause");
       return 0;
       }

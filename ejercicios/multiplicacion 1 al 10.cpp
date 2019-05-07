#include<stdio.h>
#include<iostream>
int main(){
int i,j,z;
z=0;
for(i=1;i<=10;i++){
for(j=1;j<=10;j++){
z=i*j;
printf("%d x %d=%d",i,j,z);
printf("\n");
}
}
system("pause");
return 0;
}

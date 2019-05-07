#include<stdio.h>
#include<iostream>
int matrix(int s[3][3]){
int g,u;
for(g=0; g<3; g++){
  for(u=0; u<3; u++){
  if(g==u){
  if(s[g][u]==2 || s[g][u]==3){
  }
  }
}
}
printf("% ",s);
}

int main(){
    int b[3][3],i,j,s;
    printf("INGRESE LOS VALORES:\n");
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    scanf("%d",&b[i][j]);
    }
    }
  s=matrix(b);
system ("pause");
}

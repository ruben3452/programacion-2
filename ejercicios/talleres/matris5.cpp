#include<stdio.h>
#include<iostream>

    int main(){
  int w[4][4],s,d,suma=0,suma2=0;
   printf("ingrese el numero");
  for(s=0;s<4;s++){
    for(d=0;d<4;d++){
      scanf("%d",&w[s][d]);    
}
}
  for(s=0;s<4;s++){
    for(d=0;d<4;d++){
      suma+=w[s][d];
    printf("  ");
    printf("%d",w[s][d]); 
}
printf("\n");
}
printf("\n");
 printf("%d\n",suma);
 for(d=0;d<4;d++){
    for(s=0;s<4;s++){
      suma2+=w[d][s];
      printf("  ");
    printf("%d",w[d][s]); 
    }
printf("\n");
}
printf("\n");
printf("%d\n",suma2);

  system("pause");
}


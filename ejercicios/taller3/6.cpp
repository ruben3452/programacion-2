#include<stdio.h>
#include<iostream>
void texto (void){
     printf("programa que recibe un valor en libras y imprimir el valor en pesos + IVA \n(16 porciento) \n");
     system(0);
     }
int merk(int l){
    int vl,sum,iva,sum2;
    vl=3785;
    sum=(vl*l);
    iva=(sum*16/100);
    sum2=sum+iva;
    return(sum2);
}
int main(){
    texto();
    int a,b;
    printf("ingrese el balor en libras: ");
    scanf("%d",&b);
    a=merk(b);
    printf("valor en libras es $%d\n",a);
    system("pause");
}
    

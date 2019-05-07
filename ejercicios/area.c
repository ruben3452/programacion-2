#include<stdio.h>
#define pi 3.148289
int main(){
float radio,area;
printf("entre el radio:");
scanf("%f",&radio);
area=pi*(radio*radio);
printf("el area es: %f",area);
getchar();
system ("pause");
return 0;
}

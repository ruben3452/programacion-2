#include <stdio.h>
#include <string.h>
int main()
{

char i,j;
char longitud;
char cadena[20];
char temp;

printf("Introduce un texto : ");

gets(cadena);
longitud=strlen(cadena);
for (i=0,j=longitud-1; i<longitud/2; i++,j--)
{
	temp=cadena[i];
	cadena[i]=cadena[j];
	cadena[j]=temp;
}
printf("Resultado: %s\n", cadena);
getchar();
}

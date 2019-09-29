/*Haga el programa principal con opciones a cinco funciones sin paso de parámetros que calcule las siguientes áreas: 
a) Círculo, b) Cuadrado, c) Rectángulo, d) Triángulo, e) Trapecio. */

#include <stdio.h>
#include <conio.h>
#define PI  3.1415926

void circulo();
void cuadrado();
void rectangulo();
void trapecio();

main()
{
char opc,a,b,c,d,e;
printf(" Hallar el area de un: \n\n");
printf(" a) Circulo\n");
printf("\n b) Cuadrado\n");
printf("\n c) Rectangulo\n");
printf("\n d) Triangulo\n");
printf("\n e) Trapecio\n\n");
printf("\n Ingrese la letra correspondiente a la accion a realizar: ");
scanf("%c",& opc);

if(opc==a);
{
circulo();
}

if (opc==b);
{cuadrado();
}

getch();
return 0;
}

void circulo()
{
	float rad,area;
printf("\n\nIngrese el radio del circulo ");
	scanf("%f",& rad);
area=PI*(rad*rad);
	printf("\n\nEl area del circulo es %.2f",area);
}

void cuadrado()
{
float lad,area;
	printf("\n\n Ingrese un lado del cuadrado ");
scanf("%f",& lad);
	area=lad*lad;
printf("\n\n El area del cuadrado es %.2f",area);
}

void rectangulo()
{
float b,h,area;
	printf("\n\n Ingrese la base del rectangulo ");
scanf("%f",& b);
	printf("\n\n Ingrese la altura del rectangulo ");
scanf("%f",& h);
	area=b*h;
printf("\n\n El area del rectangulo es %.2f",area);
}

void triangulo()
{
float b,h,area;
	printf("\n\n Ingrese la base del triangulo ");
scanf("%f",& b);
	printf("\n\n Ingrese la altura del triangulo ");
scanf("%f",& h);
	area=(b*h)/2;
printf("\n\n El area del triangulo es %.2f",area);
}

void trapecio()
{
float bs,bi,h,area;
	printf("\n\n Ingrese la base superior del trapecio ");
scanf("%f",& bs);
	printf("\n\n Ingrese la base inferior del trapecio ");
scanf("%f",& bi);
	printf("\n\n Ingrese la altura del trapecio ");
scanf("%f",& h);
	area=((bs+bi)/2)*h;
printf("\n\n El area del trapecio es %.2f",area);
}

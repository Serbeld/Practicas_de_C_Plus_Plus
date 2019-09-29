/*Realizar dos funciones: una llamada pedir, que no toma parámetros, y devuelve un número entero; 
y otra llamada triple, que toma un número entero como parámetro y devuelve un número entero.  
La función pedir debe pedir por teclado un número entero, y devolverlo. 
La función triple, debe calcular el triple del número que recibe como parámetro y devolver el resultado.*/

#include <stdio.h>
#include <conio.h>

int a;

void pedir();
int triple(int x);

main()
{
pedir();
triple(a);
	
	getch();
	return 0;
}

void pedir()
{
	printf("Escriba un numero entero ");
scanf("%d",& a);
}

int triple(int x)
{
	int triple;
triple=x*3;
	printf("El triple del numero ingresado es: %d",triple);
}

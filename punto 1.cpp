/*Realizar una función llamada media2, que toma dos números reales como parámetros, 
y devuelve un número real que es la media de los dos números pasados como parámetros. 
NOTA: Para calcular la media de dos números, se suman, y ese resultado se divide entre 2.*/  

#include <stdio.h>
#include <conio.h>

float media2(float x, float y);

main ()
{
	float a,b;
printf("Ingrese el primer valor para calcular la media ");
	scanf("%f",& a);
printf("\nIngrese el segundo valor para calcular la media ");
	scanf("%f",& b);
media2(a,b);
	getch();
return 0;
}

float media2(float x, float y)
{
	float media;
	media=(x+y)/2;
	printf("\nLa media entre los dos numeros anteriores es de: %.1f", media);
}

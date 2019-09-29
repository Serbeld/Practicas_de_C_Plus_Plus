/* Haga el programa principal y opciones a tres funciones con paso de parámetros que calculen: 
a) la hipotenusa de un triángulo rectángulo, b) el área de un triángulo, c) el tercer ángulo de un triángulo */

#include<conio.h>
#include<stdio.h>
#include<math.h>

float hipotenusa(float co, float ca);
float area(float base, float altura);
float angulo(float ang1, float ang2);

main()
{
char opc;
printf("\nQue desea hallar?\n\n");
printf("a) si desea hallar la hipotenusa de un triangulo rectangulo\n\n");
printf("b) si desea hallar el area de un triangulo \n\n");
printf("c) si desea hallar el tercer angulo de un triangulo\n\n");
printf("Escriba la opcion a escoger ");
scanf("%c",& opc);

	switch(opc)
{
  case 'a': 
  		float o,a;
	printf("\n\nIngresa el cateto opuesto al angulo ");
		scanf("%f",& o);
	printf("\n\nIngresa el cateto abyacente al angulo ");
		scanf("%f",& a);
	hipotenusa(o,a);
  break;
  
  case 'b': 
    		float b,h;
	printf("\n\nIngresa la altura del triangulo ");
		scanf("%f",& b);
	printf("\n\nIngresa la base del triangulo ");
		scanf("%f",& h);
	area(b,h);
  break;
  
  case 'c': 
  	float a1,a2;
	printf("\n\nIngresa uno de los angulos del triangulo ");
		scanf("%f",& a1);
	printf("\n\nIngresa otro de los angulos del triangulo ");
		scanf("%f",& a2);
	angulo(a1,a2);
  break;
  
  default: printf("\n\nEl caracter ingresado no existe"); 
  break; 
}

getch();
return 0;
}

float hipotenusa(float co, float ca)
{
	float hip;
hip=sqrt(co*co+ca*ca);
	printf("\n\nLa hipotenusa del triangulo es %.2f",hip);
}

float area(float base, float altura)
{
	float area;
area=(base*altura)/2;
	printf("\n\nEl area del triangulo es %.2f",area);
}

float angulo(float ang1, float ang2)
{
	float angulo;
angulo=180-(ang1+ang2);
	printf("\n\nEl tercer angulo del triangulo es %.2f",angulo);
}

// Agregar el IVA a un solo producto

#include<iostream>

using namespace std;

int main(){
	
	float precio = 0, IVA = 0.05;								// Se inicializan las variables del programa
	cout<<"Digite el precio del producto: "; cin>>precio;		// Se ingresa el precio del producto
	precio = precio + precio * IVA;								// Se agrega el IVA al precio inicial
	cout<<"El precio total mas IVA es de : "<<precio;			// Imprime el precio TOTAL
	
	return 0;
}



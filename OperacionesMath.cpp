/*
Escribe un programa que lea una entrada de dos números
y muestre en pantalla la suma, resta, multiplicación y división
*/

#include<iostream>

using namespace std;

int main(){
	
	float n1,n2,suma,resta,multi = 0, divi = 0; // Inicializar valores
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multi<<endl;
	cout<<"La division es: "<<divi<<endl;
	
	return 0;
	
}



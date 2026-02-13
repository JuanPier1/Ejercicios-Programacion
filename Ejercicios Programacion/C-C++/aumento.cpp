#include <iostream>
#include <locale.h>

using namespace std;

/* Ejercicio de aumento y resultado*/

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0;
	int aumento1 = 7, aumento2 = 5, aumento3 = 2;
	cout << "Inserte su número" << endl;
	cin >> numero;
	system("clear");
	cout << "Su número es: " << numero << endl;
	int resultado = numero + aumento1;
	cout << "\nSe ha aumentado " << aumento1 << ", Operación: " << numero << " + " << aumento1 << endl;
	cout << "El resultado es: " << resultado << endl;
	numero = resultado;
	resultado = numero + aumento2;
	cout << "\nSe ha aumentado " << aumento2 << ", Operación: " << numero << " + " << aumento2 << endl; 
	cout << "El resultado es: " << resultado << endl;
	numero = resultado;
	resultado = numero + aumento3;
	cout << "\nSe ha aumentado " << aumento3 << ", Operación: " << numero << " + " << aumento3 << endl; 
	cout << "El resultado es: " << resultado << endl;
	cout << "\n";
	return 0;
}
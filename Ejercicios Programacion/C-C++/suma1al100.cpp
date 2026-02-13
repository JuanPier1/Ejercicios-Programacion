#include <iostream>
#include <locale.h>


using namespace std;

/* Ejercicio de Suma de los números del 1 al 100  */ 

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int suma = 0;
	int resultados[100];
	cout << "Suma de los números del 1 al 100" << endl;
	for (int contador = 1; contador < 101; contador++) {
		//suma = suma + contador;
		suma += contador;
		resultados[contador-1] = suma;
	}
	for(int i = 0; i < 100; i++){
	    cout << "[" << resultados[i] << "]";
	}
	cout << endl;
	cout << "Suma total: ";
	cout << suma << endl;
	
	return 0;
};
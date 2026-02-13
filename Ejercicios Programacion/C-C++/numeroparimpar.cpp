#include <iostream>
#include <locale.h>

using namespace std;

/* Ejercicio de número par o impar*/

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0;
	cout << "Ingrese su número" << endl;
	cin >> numero;
	system("clear");
	if(numero == 0){
	    cout << "Su número es cero, elija otro número" << endl;
	}
	else if(numero % 2 == 0){
	    cout << "Su número: " << numero << " es par" << endl;
	}
	else if(numero % 2 != 0){
	    cout << "Su número: " << numero << " es impar" << endl;
	}
	else{
	    cout << "Ponga un número" << endl;
	}
		
	return 0;
}
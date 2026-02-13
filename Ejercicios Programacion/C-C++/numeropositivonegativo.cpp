#include <iostream>
#include <locale.h>

using namespace std;

/* Ejercicio de número negativo o positivo*/

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0;
	cout << "Ingrese su número" << endl;
	cin >> numero;
	system("clear");
	if(numero == 0){
	    cout << "Su número: " << numero << " es cero, por lo tanto es neutro" << endl;
	}
	else if(numero > 0){
	    cout << "Su número: " << numero << " es positivo" << endl;
	}
	else if(numero > 0){
	    cout << "Su número: " << numero << " es negativo" << endl;
	}
	else{
	    cout << "Ponga un número" << endl;
	}
		
	return 0;
}
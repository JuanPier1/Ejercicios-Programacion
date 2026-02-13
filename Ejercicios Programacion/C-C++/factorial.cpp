#include <iostream>
#include <locale.h>


using namespace std;

/* Ejercicio de Factorial de un número  */ 

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int numero;
	long double factorial = 1;
	cout << "Inserte el número: ";
	cin >> numero;
	system("clear");
	for(int contador = 1; contador <= numero; contador++){
	    //factorial = factorial * contador;
	    factorial = factorial * contador;
	    if(contador < numero){
	        cout << contador << " * ";
	    }else{
	        cout << contador;
	    }
	}
	cout << endl;
	cout << "Factorial de " << numero << " --> " << factorial << endl;
	
	return 0;
};

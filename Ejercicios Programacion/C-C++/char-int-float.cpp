#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

/* Ejercicio:
    char a, b=2, c=3, d=4
    a=b+c/d 
    a=b*c/d 
    a*(c/d)
    int e, f=3.14, g= 12.23
    e=sqrt(f+g)
*/

int main() {
	setlocale(LC_CTYPE, "Spanish");
	char a, b = 2, c = 3, d = 4;
	cout << " Carácteres Alfanúmericos (char): a: ?, " << "b: " << (int)b << ", c: " << (int)c << ", d: " << (int)d << endl;
	a = b + c / d;
	cout << "a = b + c / d" << endl;
	cout << "carácter alfanumerico: " << a << "\t//Es un ascii no visible" << endl;
	cout << "convertido a entero: " << (int)a << endl;
	cout << "a = " << (int)a << endl;
	a = b * c / d;
	cout << "a = b * c / d" << endl;
	cout << "carácter alfanumerico: " << a << "\t//Es un ascii no visible" << endl;
	cout << "convertido a entero: " << (int)a << endl;
	a * c / d;
	cout << "a * (c/d) tomando 'a' como: " << (int)a << endl;
	cout << "carácter alfanumerico: " << a << "\t//Es un ascii no visible" << endl;
	cout << "convertido a entero: " << (int)a << endl;
	int e, f = 3.14, g = 12.23;
	cout << "\nEnteros (int): e: ?, f: " << (float)f << ", g: " << (float)g << endl;
	e = sqrt(f+g);
	cout << "e = √(f+g)" << endl;
	cout << "número entero: e = " << e << endl;
	float fF = 3.14, gF = 12.23;
	float eF = sqrt(fF + gF);
	cout << "convertido a flotante: e = " <<  round(eF * 100.0) / 100.0 << endl;
	return 0;
}
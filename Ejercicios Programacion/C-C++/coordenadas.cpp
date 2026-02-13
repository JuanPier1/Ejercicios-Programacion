#include <iostream>
#include <locale.h>
#include <math.h>
#include <cmath>

using namespace std;

/* Ejercicio de coordenadas: sacar la distancia, la pendiente y la ecuación de la recta */ 

int main() {
	setlocale(LC_CTYPE, "Spanish");
	float x1, x2, y1, y2, d, m;
	printf("Coordenadas:");
	printf("Inserte dos puntos dimensionales ( x , y )"); cout << endl;
	printf("Inserte coordenadas del punto A"); cout << endl;
	printf("punto A (x): ");
	cin >> x1;
	printf("punto A (y): ");
	cin >> y1;
	printf("Inserte coordenadas del punto B"); cout << endl;
	printf("punto B (x): ");
	cin >> x2;
	printf("punto B (y): ");
	cin >> y2;
	printf("\nDatos obtenidos, presione Enter para continuar...");
	cin.get();
	system("clear");
	d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    cout << "Punto A = " << "( " << x1 << " , " << y1 << " )"; 
    cout << "\tPunto B = " << "( " << x2 << " , " << y2 << " )" << endl;
    printf("\nLa distancia entre dos puntos: d = √(x2 - x1)² + (y2 - y1)²"); cout << endl;
	printf("Distancia (d) =  %.2f", d); cout << endl;
	m = (y2 - y1) / (x2 - x1);
	printf("\nLa pendiente entre dos puntos: m = (y2 - y1) / (x2 - x1)"); cout << endl;
	printf("Pendiente (m) = %.2f", m); cout << endl;
	double pi = 3.1416, tang;
	tang = (atan(m)) * (180 / pi);
	printf("\nEl ángulo tangente: tg = arcotangente de (m) * (π radianes(180)) / π"); cout << endl;
	printf("Ángulo (tg) = %.2f", tang); cout << endl;
	printf("\nLa ecuación de la recta conociendo dos puntos\n"); cout << endl;
	printf("Forma punto-pentiende: y - y1 = m(x - x1)"); cout << endl;
	cout << "y - " << y1 << " = " << m << "(" << "x - " << x1 << ")";
	char signo;
	if(m >= 0) { signo = '-'; } else { signo = '+'; }
	double b = m * (-x1) + y1;
	cout << "\tDonde y = " << m << "(0) " << signo << " " << b << endl;
	printf("Forma pendiente-intersección: y = mx + b, donde b = y1 - mx"); cout << endl;
	printf("Intersección (b) = %.2f", b); cout << endl;
	cout << "y = " << m*0 + b;
	
	return 0;
};
#include <iostream>
#include <locale.h>
#include <math.h>
#include <cstring>

using namespace std;

/* Ejercicio de sacar datos del círculo */ 

struct Circulo{
    char letra[3];
    float x, y, r, a; //punto (x, y), radio y area
};

int datosCirculo(Circulo* dato, int cantidad) {
	for (int i = 0; i < cantidad; i++) {
		system("clear");
		cout << "Datos del círculo" << endl;
		cout << "# Circulo " << i + 1 << " #" << endl;
		cout << "Ingrese una etiqueta (ejemplo: a, a1, aa)" << endl;
		char letra[3];
		cin >> letra;
		letra[3] = toupper(letra[3]);
		strcpy(dato[i].letra, letra);
		cout << "Ingrese coordenada x: ";
		cin >> dato[i].x;
		cout << "Ingrese coordenada y: ";
		cin >> dato[i].y;
	}
	system("clear");
	return 0;
}

float radioCirculo(float x, float y){
    float radio = sqrt(pow(x,2) + pow(y,2));
    return radio;
}

int sacarRadios(Circulo* arreglo, int cantidad){
    float radio = 0;
    int posicion;
    for(int i = 0; i < cantidad; i++){
        arreglo[i].r = radioCirculo(arreglo[i].x, arreglo[i].y);
        if(arreglo[i].r > radio){
            radio = arreglo[i].r;
            posicion = i;
        }
    }
    return posicion;
}

float areaCirculo(float radio) {
    float pi = 3.1415, area = pi * pow(radio,2);
    return area;
}

int sacarAreas(Circulo* arreglo, int cantidad){
    float area = 0;
    int posicion;
    for(int i = 0; i < cantidad; i++){
        arreglo[i].a = areaCirculo(arreglo[i].r);
        if(arreglo[i].a > area){
            area = arreglo[i].a;
            posicion = i;
        }
	}
	return posicion;
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int cantidad = 0, mayor, lejano;
	cout << "¿Cuántos círculos serán?" << endl;
	cin >> cantidad;
	Circulo* circulos = new Circulo[cantidad];
	datosCirculo(circulos, cantidad);
	mayor = sacarRadios(circulos, cantidad);
	lejano = sacarAreas(circulos, cantidad);
	for(int i = 0; i < cantidad; i++){
	    cout << circulos[i].letra << ": (" << circulos[i].x << " , " << circulos[i].y << ") "<< endl;
	    cout << "Radio = " << circulos[i].r << "\nÁrea = " << circulos[i].a << endl;
	    cout << endl;
	}   
	cout << endl;
	cout << "El círculo de mayor área es: " << circulos[mayor].letra << endl;
	cout << "El círculo más lejano al origen es: " << circulos[lejano].letra << endl;
	delete[] circulos;
	return 0;
};
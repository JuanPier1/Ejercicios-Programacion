#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

/* Ejercicio de Arreglos con números aleatorios del 1 al 1000 */

int largoA = 0, largoB = 0;

void agregarNumeros(int arreglo[], int largo){
    for (int i = 0; i < largo; i++){
        arreglo[i] = rand() % 1000 + 1;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    srand(time(NULL));
    cout << "tamaño del arreglo A" << endl;
    cin >> largoA;
    int arregloA[largoA];
    cout << "tamaño del arreglo B" << endl;
    cin >> largoB;
    int arregloB[largoB];
    agregarNumeros(arregloA, largoA);
    agregarNumeros(arregloB, largoB);
    system("clear");
    cout << "Arreglo 1:" << endl;
    for (int i = 0; i < largoA; i++)
    {
        cout << " [" << arregloA[i] << "] ";
    }
    cout << "\nArreglo 2:" << endl;
    for (int i = 0; i < largoB; i++)
    {
        cout << " [" << arregloB[i] << "] ";
    }
    return 0;
}
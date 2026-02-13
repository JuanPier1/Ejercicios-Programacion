#include <iostream>
#include <locale.h>

using namespace std;

/* Ejercicio de arreglo de punteros */


int main()
{
    setlocale(LC_CTYPE, "Spanish");
    //5 arreglos que contenga 5 elementos tipo int, un arreglo, un arreglo de punteros de 5 espacios
    int arregloInt[5] = {0, 1, 2, 3, 4};
    int* arregloPuntero[5];
    for(int i = 0; i < 5; i++){
        arregloPuntero[i] = &arregloInt[i];
    }
    for(int i = 0; i < 5; i++){
        cout << i+1 << ". Contenido: " << *arregloPuntero[i] << " \tDirección: " << arregloPuntero[i] << endl;
    }
    return 0;
}
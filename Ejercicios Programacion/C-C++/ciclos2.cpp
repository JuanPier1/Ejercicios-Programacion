#include <iostream>
#include <locale.h>
#include <limits>

using namespace std;

struct articulo {
    char claveProducto[4];
    char nombre[50];
    float precio;
    int existencias;
} producto[100];

void ingresarProducto(int i){
    system("clear");
    cout << "Ingresa la informacion del producto n° " << i+1 << "\n";
    cout << " Ingresa la clave del producto: ";
    cin >> producto[i].claveProducto;
    cout << " Ingresa el nombre del producto: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.getline(producto[i].nombre, 50);
    cout << " Ingresa precio del producto: ";
    cin >> producto[i].precio;
    cout << " Ingresa la cantidad de existencias: ";
    cin >> producto[i].existencias;
    system("clear");
}

void mostrarProducto(int cantidad, articulo mostrar[]){
    system("clear");
    cout << "Lista de productos:\n";
    if(cantidad > 0){
        for(int i = 0; i < cantidad; i++){
        cout << "Clave: " << mostrar[i].claveProducto << " / Nombre: " << mostrar[i].nombre << " / Precio: " << mostrar[i].precio << " / Existencias(Stock): " << mostrar[i].existencias << "\n";
    }
    }
    cout << "\nPresione Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main() {
    setlocale(LC_CTYPE, "Spanish");
    int opcion;
    int posicion = 0;
    do {
        cout << "Tienda";
        cout << "\nSolo se puede agregar una cantidad de " << 100 - posicion << " productos";
        cout << "\n1.- Ingresa un producto";
        cout << "\n2.- Mostrar productos";
        cout << "\n0.- Salir";
        cout << "\nIngrese una opción: ";
        cin >> opcion;
        switch (opcion) {
        case 0:
            break;
        case 1: 
        if(posicion < 100) {
            ingresarProducto(posicion); posicion++;
        }
        else{
            cout << "\nYa no se puede ingresar productos";
        }
            break;
        case 2: mostrarProducto(posicion, producto);
            break;
        default: cout << "\nLa opción ingresada no es válida";
        }
    } while (opcion != 0);
    return 0;
}
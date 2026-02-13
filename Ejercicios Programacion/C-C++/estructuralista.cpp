#include <iostream>
#include <locale.h>
using namespace std;

/* Ejercicio de memoria dinámica y lista enlazada simple */

struct Liga {
    string dato;
    Liga* sig;
};

int main() {
    setlocale(LC_CTYPE, "Spanish");
    Liga* ultima = nullptr, * actual = nullptr;
    int cantidad;

    cout << "¿Cuántas cadenas desea ingresar?" << endl;
    cin >> cantidad;
    cin.ignore();

    for (int i = 0; i < cantidad; i++) {
        Liga* nuevo = new Liga;
        cout << "Ingrese texto: ";
        getline(cin, nuevo->dato);
        nuevo->sig = nullptr;

        if (ultima == nullptr) {
            ultima = nuevo;
            actual = nuevo;
        } else {
            actual->sig = nuevo;
            actual = nuevo;
        }
    }
    system("clear");
    cout << "\nDatos capturados en la lista:\n";
    Liga* temp = ultima;
    while (temp != nullptr) {
        cout << temp->dato << endl;
        temp = temp->sig;
    }
    
    temp = ultima; // Liberar memoria
    
    while (temp != nullptr) {
        Liga* borrar = temp;
        temp = temp->sig;
        delete borrar;
    }

    return 0;
}
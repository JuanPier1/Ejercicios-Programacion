#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

/* Ejercicio: Empresa de transporte
    Se quiere guardar el nombre de los conductores, los kilómetros que conducen cada día de la semana
    Se va a utilizar dos arreglos: Nombre y kms
    se requiere generar un nuevo arreglo "total_kms" con los kilómetros totales
    Al finalizar se muestra la lista de los conductores y los kilómetros realizados
*/

int main() {
    setlocale(LC_CTYPE, "Spanish");
    int cantidad;
    const int dias = 7;
    cout << "¿Cuántos conductores son?" << endl;
    cin >> cantidad;
    string Nombre[cantidad];
    system("clear");
    //Agregar conductores
    cin.ignore();
    for(int i = 0; i < cantidad; i++){
        cout << "Ingrese el nombre del conductor:" << endl;
        getline(cin, Nombre[i]);
    }
    system("clear");
    //Agregar Kilómetros
    int kms[cantidad][dias], total_kms[cantidad];
    for (int i = 0; i < cantidad; i++) {
        cout << "Kilómetros de " << Nombre[i] << endl;
        for (int j = 0; j < dias; j++) {
            cout << " Día " << j + 1 << ": ";
            cin >> kms[i][j];
            total_kms[i] += kms[i][j];
        }
    }
    system("clear");
    //mostrar Resultados
    cout << "\n===== RESULTADOS =====\n";
    for (int i = 0; i < cantidad; i++) {
        cout << Nombre[i] << " recorrió " << total_kms[i] << " km(s) en la semana.\n";
    }

    return 0;
}
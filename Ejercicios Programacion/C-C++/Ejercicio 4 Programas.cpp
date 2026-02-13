#include <iostream>
#include <locale.h>
#include <conio.h>

using namespace std;

int opcion, a = 0, e = 0, i = 0, o = 0, u = 0;

void programaI(char tecla) {
    system("cls");
    cout << "Programa I\n";
    cout << "Presione S o N";
    cout << "\tó Presione E / Enter / Retroceso para salir" << endl;
    do {
        tecla = _getch();
        switch (tecla) {
        case 's':
            cout << "Presionaste Sí (s)" << endl;
            break;
        case 'S':
            cout << "Presionaste Sí (s)" << endl;
            break;
        case 'n':
            cout << "Presionaste No (n)" << endl;
            break;
        case 'N':
            cout << "Presionaste No (n)" << endl;
            break;
        case 'e': return;
            break;
        case 13: return;
            break;
        case 8: return;
            break;
        default:
            break;
        }

    } while (true);
    tecla = '\0';
}

void decrementarVocales() {
    if (a > 0) a--;
    if (e > 0) e--;
    if (i > 0) i--;
    if (o > 0) o--;
    if (u > 0) u--;
}

void programaII(char tecla) {
    while (true) {
        system("cls");
        cout << "Presione las vocales (a, e, i, o, u) para conteo" << "\nPresione retroceso para decrementar\n" << endl;
        cout << "a: " << a << "\t";
        cout << "e: " << e << "\t";
        cout << "i: " << i << "\t";
        cout << "o: " << o << "\t";
        cout << "u: " << u << endl;

        tecla = _getch();

        if (tecla == 'a' || tecla == 'A') a++;
        if (tecla == 'e' || tecla == 'E') e++;
        if (tecla == 'i' || tecla == 'I') i++;
        if (tecla == 'o' || tecla == 'O') o++;
        if (tecla == 'u' || tecla == 'U') u++;
        if (tecla == 8) decrementarVocales();
        if (tecla == 27 || tecla == 13) return;
    }
    tecla = '\0';
}

void programaIII(char tecla) {
    do {
        system("cls");
        cout << "Ingresar un número entero y un número flotante" << endl;
        int numeroEntero;
        float numeroFlotante;
        cout << "Ingrese un número entero ";
        scanf_s("/%i", &numeroEntero);
        cin >> numeroEntero;
        cout << "Ingrese un número flotante ";
        scanf_s("/%f", &numeroFlotante);
        cin >> numeroFlotante;
        system("cls");
        cout << "Los números son: " << numeroEntero << " | " << numeroFlotante << endl;
        cout << "\nPresione ESC / Retroceso / S para salir ó Presione cualquier tecla para repetir" << endl;
        tecla = _getch();
        if (tecla == 's' || tecla == 'S' || tecla == 27 || tecla == 8) return;
        else continue;
    } while (true);
    tecla = '\0';
}

void programaIV() {
    system("cls");
    char Nombre[100];
    printf("Ingrese su Nombre y Apellidos: \n");
    cin.getline(Nombre, 100);
    system("cls");
    printf("Su nombre es: %s\n", Nombre);
    cout << endl;
    system("pause");
}

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    char tecla = '\0';
    while (opcion != 27 && opcion != 13 && opcion != 8) {
        system("cls");
        cout << "Práctica de 4 programas" << endl;
        cout << "===== MENU =====\n";
        cout << "Presione una opción o Presione ESC / Enter / Retroceso para salir" << endl;
        cout << "1. Programa I" << endl;
        cout << "2. Programa II" << endl;
        cout << "3. Programa III" << endl;
        cout << "4. Programa IV" << endl;
        opcion = _getche();
        switch (opcion) {
        case 8:
            break;
        case 13:
            break;
        case 27:
            break;
        case 49: programaI(tecla);
            break;
        case 50: programaII(tecla);
            break;
        case 51: programaIII(tecla);
            break;
        case 52: programaIV();
            break;
        default:
            cout << "\nEsa opción no es correcta" << endl;
            system("pause");
            break;
        }
    }
    return 0;
}
#include <iostream>
#include <locale>
#include <limits>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int existencias = 1000, entregas = 0; 
			do {
			    system("clear");
				cout << "Se encuentran en existencias alrededor de: " << existencias << endl;
				cout << "Introduzca el número de unidades entregadas: ";
				cin >> entregas;
				if(entregas > existencias){
				    system("clear");
				    cout << "No se puede entregar más de lo que hay en existencias." << endl;
				    cout << "Presione Enter para continuar...";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin.get();

				    continue;
				}
				if(existencias > 0 && entregas <= existencias){
				    existencias = existencias - entregas;
				}
				if(existencias > 0 && existencias < 200){
				    system("clear");
				    cout << "El inventario ha bajado de 200 unidades... Debe comunicarlo." << endl;
				    cout << "\tTotal: " << existencias << endl;
				}
				if(existencias == 0){
				    system("clear");
				    cout << "Se ha acabado el inventario... Debe comunicarlo." << endl;
				}
				
			} while (existencias >= 200);
			return 0;
}
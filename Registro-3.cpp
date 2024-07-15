#include <iostream>
#include <string>
using namespace std;

struct data {
    string name;
    int dia;
    int mes;
    int year;
};

int main() {
    int n;
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;
    data persona[n];
    cin.ignore(); // Ignoramos el salto de línea después de ingresar 'n'

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos solicitados de la persona #" << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin, persona[i].name);
        cout << "Dia de nacimiento: ";
        cin >> persona[i].dia;
        cout << "Mes de nacimiento: ";
        cin >> persona[i].mes;
        cout << "Anio de nacimiento: ";
        cin >> persona[i].year;
    }

    int mes;
    cout << "Personas que nacieron en el mismo mes" << endl;
    do {
        cout << "Ingrese un mes a buscar (0 para salir): ";
        cin >> mes;
        if (mes != 0) {
            int c = 0;
            for (int i = 0; i < n; i++) {
                if (persona[i].mes == mes) {
                    cout << "Nombre: " << persona[i].name << endl;
                    cout << "Dia de nacimiento: " << persona[i].dia << endl;
                    cout << "Anio de nacimiento: " << persona[i].year << endl;
                    c++;
                }
            }
            if (c == 0) {
                cout << "No hay coincidencias, pruebe otro mes" << endl;
            }
        }
    } while (mes != 0);

    return 0;
}

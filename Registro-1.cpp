#include <iostream>
#include <string>
#include <vector> // Incluimos la biblioteca vector
using namespace std;

struct EMPLEADO {
    int sue; // variable para el sueldo
    string sex; // variable para el sexo
    string name; // variable para los nombres
};

int main() {
    int n;
    cout << "Empresa DataTech" << endl;
    cout << "Ingrese el numero de empleados: ";
    cin >> n;

    vector<EMPLEADO> empleados(n); // Usamos vector en lugar de arreglo estático

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos del empleado #" << i + 1 << endl;
        cin.ignore();
        cout << "Ingrese su nombre: ";
        getline(cin, empleados[i].name);
        cout << "Ingrese su sexo: ";
        cin >> empleados[i].sex;
        cout << "Ingrese su sueldo: ";
        cin >> empleados[i].sue;
    }

    int msue = 0, mensue = 0;
    for (int i = 0; i < n; i++) {
        if (empleados[i].sue < empleados[mensue].sue) {
            mensue = i;
        }
        if (empleados[i].sue > empleados[msue].sue) {
            msue = i;
        }
    }

    cout << "Empleado con el menor sueldo" << endl;
    cout << "Nombre: " << empleados[mensue].name << endl;
    cout << "Sexo: " << empleados[mensue].sex << endl;
    cout << "Sueldo: " << empleados[mensue].sue << endl;

    cout << "Empleado con el mayor sueldo" << endl;
    cout << "Nombre: " << empleados[msue].name << endl;
    cout << "Sexo: " << empleados[msue].sex << endl;
    cout << "Sueldo: " << empleados[msue].sue << endl;

    return 0;
}
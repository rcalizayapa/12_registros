#include<iostream>
using namespace std;

struct EMP{
        int numero;
        string nombre;
        float ventas[12];
        float salario;
    };
    int main(){
        EMP EMPLEADO[50];
        int n;
        cout<<"ingrese la cantidad de epleados: ";cin>>n;
        cin>>n;
        for(int i = 0; i < n; i++){
            cout<<"ingrese el numero de empleados: ";
            cin>>EMPLEADO[i].numero;
            cout<<"ingrese el nombre del empleado: ";
            cin.ignore();
            getline(cin,EMPLEADO[i].nombre);

            for(int j = 0; j < 12; j++){
                cin>>EMPLEADO[i].ventas[j];
            }
            cout<<"ingrese su salario";cin>>EMPLEADO[i].salario;
    }
    for(int i=0; i<n; i++){
        cout<<"EMPLEADO # "<<i+1<<endl;
    }
    return 0;
}
    
   
    
   

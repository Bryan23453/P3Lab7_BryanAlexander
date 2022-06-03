#include <iostream>
#include <string>
#include "Numero.hpp"
using namespace std;
int main(){
    cout << "----------Bienvenido----------\n";
	int opcion=1;
	while (opcion!=0){
		cout << "0. Salir" << endl;
		cout << "1. Ingresar numero" << endl;
		cout << "2. Listar numero" << endl;
		cout << "3. Operaciones" << endl;
		cout << "Ingrese Opcion: "; cin >> opcion;
		switch (opcion) {
		case 0: {
			cout << "Feliz Dia!";
		}
			  break;
		case 1: {
			string numero;
			cout << "Ingrese Numero:"; cin >> numero;
		}
			  break;
		case 2: {

		}
			  break;
		case 3: {

		}
			  break;
		default: {

		}
			   break;
		}
	}
	
}


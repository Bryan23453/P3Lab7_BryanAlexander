#include <iostream>
#include <string>
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Binario.hpp"
#include "Octal.hpp"
#include <vector>
using namespace std;
vector <Numero*> num;
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
			string bin("b");
			string hexa("x");
			string octa("v");
			if (numero.find(bin) != string::npos) {
				if ((int)numero[numero.size()-1]==98) {
					num.push_back(new Numero(numero));
				}
			}else{
				if (numero.find(hexa) != string::npos){
					cout << "hola2";
					if ((int)numero[0] == 48 && (int)numero[1] == 120) {
						num.push_back(new Numero(numero));
					}
				}else{
					if (numero.find(octa) != string::npos) {
						if ((int)numero[0] == 48 && (int)numero[1] == 99) {
							num.push_back(new Numero(numero));
						}
					}
				}
			}
		}
			  break;
		case 2: {
			cout << "---------------------Numeros----------------------" << endl;
			for (size_t i = 0; i < num.size(); i++) {
				cout << num[i] << endl;
			}
			cout << "--------------------------------------------------" << endl;
		}
			  break;
		case 3: {
			int ope;
			cout << "1. Sumar" << endl;
			cout << "2. Restar" << endl;
			cout << "3. Multiplicar" << endl;
			cout << "Ingrese Opcion: "; cin >> ope;
			switch (ope){
			case 1: {

			}
				   break;
			case 2: {

			}
				  break;
			case 3: {

			}
				  break;
			default:{
			
			}
			break;
			}
		}
			  break;
		default: {

		}
			   break;
		}
	}
	
}


#include <iostream>
#include <string>
#include "Numero.hpp"
#include "Hexadecimal.hpp"
#include "Binario.hpp"
#include "Octal.hpp"
#include <vector>
#include <math.h>
#include<conio.h>
using namespace std;
vector <Numero*> num;
int binar_decima(string num) {
	
	return 0;
}
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
			if (numero.find("b") != string::npos) {
				if ((int)numero[numero.size()-1]==98) {
					num.push_back(new Binario(numero, 98));
					cout << "Numero Binario Agregado Exitosamente " <<(char)98 << endl;
				}else {
					cout << "Numero No Cuenta Con Ningun formato"<<endl;
				}
			}else{
				if (numero.find("x") != string::npos){
					if ((int)numero[0] == 48 && (int)numero[1] == 120) {
						num.push_back(new Hexadecimal(numero, 120));
						cout << "Numero Hexadecimal Agregado Exitosamente " << (char)120 << endl;
					}
					else {
						cout << "Numero No Cuenta Con Ningun formato" << endl;
					}
				}else{
					if (numero.find("c") != string::npos) {
						if ((int)numero[0] == 48 && (int)numero[1] == 99) {
							num.push_back(new Octal(numero, 99));
							cout << "Numero Octal Agregado Exitosamente " << (char)99 << endl;

						}else {
							cout << "Numero No Cuenta Con Ningun formato" << endl;
						}
					}
				}
			}
		}
			  break;
		case 2: {
			if (num.size()>0){
				cout << "---------------------Numeros----------------------" << endl;
				for (size_t i = 0; i < num.size(); i++) {
					cout << "Numero #" << i << " " << num[i]->numer << endl;
				}
				cout << "--------------------------------------------------" << endl;
			}
			else{
				cout << "No Hay Numeros Para Mostrar"<<endl;
			}
			
		}
			  break;
		case 3: {
			if (num.size()>0){
				int ope;
				cout << "---------------------Numeros----------------------" << endl;
				for (size_t i = 0; i < num.size(); i++) {
					cout << "Numero #" << i << " " << num[i]->numer << endl;
				}
				cout << "--------------------------------------------------" << endl;
				int primer, secun;
				cout << "Ingrese el primer numero" << endl; cin >> primer;
				cout << "Ingrese el segundo numero" << endl; cin >> secun;
				cout << "--------------------------------------------------" << endl;
				cout << "1. Sumar" << endl;
				cout << "2. Restar" << endl;
				cout << "3. Multiplicar" << endl;
				cout << "Ingrese Opcion: "; cin >> ope;
				switch (ope) {
				case 1: {
					if (num[primer]->operator+(*num[secun])!=0){
						cout << "Total: " << num[primer]->operator+(*num[secun]) << endl;
					}
					
				}
					  break;
				case 2: {
					cout << "Total: " << num[primer]->operator-(*num[secun]) << endl;
				}
					  break;
				case 3: {
					cout << "Total: " << num[primer]->operator*(*num[secun]) << endl;
				}
					  break;
				default: {
					cout << "opcion invalida" << endl;
				}
					   break;
				}
			}
			else{
				cout << "no hay numero para sumar calcular o restar" << endl;
			}
			
		}
			  break;
		default: {
			cout << "opcion invalida"<<endl;
		}
			   break;
		}
	}
	
}
#include <iostream>
#include <string>
#include "Numero.hpp"
#include <sstream>
using namespace std;
    Numero::Numero() {}
    Numero::Numero(string num,char car) {

        this->numer = num;
        this->tipo = car;
    }
    int Numero::operator -(Numero num2) {
        if (tipo==98){
            int resultado=entero - num2.entero;
            string r;
            while (resultado != 0) {
                if (resultado % 2 == 0) {
                    r += "0";
                }
                else {
                    r += "1";
                }
                resultado /= 2;
            }
            try{
                string f(r.rbegin(), r.rend());
                r = f;
                return stoi(r);
            }
            catch (...){
                cout << "La Resta Es Menor O Igual A 0 " << endl;
                return 0;
            }
            
        }
        else if(tipo == 99) {
            try {
                int resultado = entero - num2.entero;
                cout.unsetf(ios::hex);
                cout.setf(ios::oct);
                return resultado;
            }
            catch (...) {
                cout << "La Resta Es Menor O Igual A 0 " << endl;
                return 0;
            }
        }
        else if (tipo==120) {
            try{
                int resultado = entero - num2.entero;
                cout.unsetf(ios::dec);
                cout.setf(ios::hex | ios::showbase);
                return resultado;
            }
            catch (...){
                cout << "La Resta Es Menor O Igual A 0 " << endl;
                return 0;
            }
        }
        
    }
    int Numero::operator +(Numero num2) {
        if (tipo == 98) {
            int resultado = entero + num2.entero;
            string r;
            while (resultado != 0) {
                if (resultado % 2 == 0) {
                    r += "0";
                }
                else {
                    r += "1";
                }
                resultado /= 2;
            }
            string f;
            for (size_t i = r.length(); i > 0 ; i--) {
                    f += r[i];
            }
            f += r[0];
            r = f;
            stringstream ss;
            int num;
            ss << r;
            ss >> num;
            return num;
        }
        else if (tipo == 99) {
            int resultado = entero + num2.entero;
            cout.unsetf(ios::hex);
            cout.setf(ios::oct);
            return resultado;
        }
        else if (tipo == 120) {
            cout << "valor de entero en octa " << entero << endl;
            int resultado = entero + num2.entero;
            cout.unsetf(ios::dec);
            cout.setf(ios::hex | ios::showbase);
            return resultado;
        }
    }
    int Numero::operator *(Numero num2) {
        if (tipo == 98) {
            int resultado = entero * num2.entero;
            string r;
            while (resultado != 0) {
                if (resultado % 2 == 0) {
                    r += "0";
                }
                else {
                    r += "1";
                }
                resultado /= 2;
            }
            string f(r.rbegin(), r.rend());
            r = f;
            return stoi(r);
        }
        else if (tipo == 99) {
            int resultado = entero * num2.entero;
            cout.unsetf(ios::hex);
            cout.setf(ios::oct);
            return resultado;
            
        }
        else if (tipo == 120) {
            int resultado = entero * num2.entero;
            cout.unsetf(ios::dec);
            cout.setf(ios::hex | ios::showbase);
            return resultado;
        }
    }
    
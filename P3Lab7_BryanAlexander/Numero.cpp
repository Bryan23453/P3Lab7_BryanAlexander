#include <iostream>
#include <string>
#include "Numero.hpp"
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
            
        }
        else if (tipo==120) {
        
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
            string f (r.rbegin(), r.rend());
            r = f;
            return stoi(r);
        }
        else if (tipo == 99) {

        }
        else if (tipo == 120) {

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

        }
        else if (tipo == 120) {

        }
    }
    
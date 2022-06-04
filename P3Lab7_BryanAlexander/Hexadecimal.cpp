#include <iostream>
#include "Hexadecimal.hpp"
using namespace std;
    Hexadecimal::Hexadecimal() {}

    Hexadecimal::Hexadecimal(string numero,char car) : Numero(numero, car) {
        this->num= numero;
        string numarregl;
        for (size_t i = 2; i < numero.size() ; i++) {
            numarregl += numero[i];
        }
        convertir(numarregl);
    }
    void Hexadecimal::convertir(string num) {
        cout << " hexa " << num << endl;
        entero=stoi(num, 0, 16);
        cout <<"numero hexa a deci" << entero << endl;
    }
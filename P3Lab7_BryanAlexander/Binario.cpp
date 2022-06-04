#include <iostream>
#include <string>
#include "Binario.hpp"
using namespace std;
    Binario::Binario() {}
    Binario::Binario(string numero, char car):Numero(numero,car) {
            this->num = numero;
            string numarregl;
            for (size_t i = 0; i < numero.size()-1; i++) {
                numarregl += numero[i];
            }
            convertir(numarregl);
    }
    void Binario::convertir(string num) {
            this->entero = std::stoi(num, nullptr, 2);
		
    }
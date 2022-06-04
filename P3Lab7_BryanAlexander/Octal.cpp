#include <iostream>
#include "Octal.hpp"
#include "Numero.hpp"
using namespace std;
    Octal::Octal() {}
    Octal::Octal(string numero,char car) : Numero(numero,car) {
        this->num = numero;
        string numarregl;
        for (size_t i = 2; i < numero.size(); i++) {
            numarregl += numero[i];
        }
        convertir(numarregl);
    }
    void Octal::convertir(string num) {
        int numeroresp = 0, cont = 0, a,num1=stoi(num);
        while (num1 != 0) {
           a = num1 % 10;
           num1 /= 10;
           numeroresp += a * pow(8, cont);
            ++cont;
        }
        this->entero = numeroresp;
    }
    
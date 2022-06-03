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
        return 0;
    }
    int Numero::operator +(Numero num2) {
        return 0;
    }
    int Numero::operator *(Numero num2) {
        return 0;
    }
    
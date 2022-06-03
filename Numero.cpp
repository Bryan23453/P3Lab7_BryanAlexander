#include <iostream>
#include "Numero.hpp"
using namespace std;
    Numero::Numero() {}
    Numero::Numero(string num) {
        this->enetero = num;
    }
    virtual int operator -(numero num2);
    virtual int operator +(numero num2);
    virtual int operator *(numero num2);
    
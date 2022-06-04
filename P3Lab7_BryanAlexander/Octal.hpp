#include <iostream>
#include <string>
#ifndef Octal_hpp
#define Octal_hpp
#include "Numero.hpp"
using namespace std;

class Octal : public Numero {
public:
    string entero;
    Octal();
    Octal(string numero);
    void convertir(string num);
};
#endif 
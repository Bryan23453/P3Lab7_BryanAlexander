#include <iostream>
#include <string>
#ifndef Octal_hpp
#define Octal_hpp
using namespace std;

class Octal : public Numero {
public:
    int entero;
    Octal();
    Octal(string numero);
    void convertir(string num);
};
#endif 
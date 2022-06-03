#include <iostream>
#include <string>
#ifndef Numero_hpp
#define Numero_hpp
using namespace std;

class Numero {
public:
    int entero;
    string numer;
    char tipo;
    Numero();
    Numero(string num, char car);
    virtual int operator -(Numero num2);
    virtual int operator +(Numero num2);
    virtual int operator *(Numero num2);
};
#endif 
#include <iostream>
#include <string>
#ifndef Numero_hpp
#define Numero_hpp
using namespace std;

class Numero {
private:
    string nom, id, pass;
    int usuadmi, monto;
public:
    int enetero;
    Numero();
    Numero(string num);
    virtual int operator -(numero num2);
    virtual int operator +(numero num2);
    virtual int operator *(numero num2);
};
#endif 
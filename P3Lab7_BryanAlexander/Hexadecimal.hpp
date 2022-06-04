#include <iostream>
#include <string>
#ifndef Hexadecimal_hpp
#define Hexadecimal_hpp
#include "Numero.hpp"
using namespace std;
class Hexadecimal : public Numero {
protected:
    string num;
public:
    Hexadecimal();
    Hexadecimal(string numero);
    void convertir(string num);
};
#endif 
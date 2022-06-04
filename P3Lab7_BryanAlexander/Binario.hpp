#include <iostream>
#include <string>
#include "Numero.hpp"
#ifndef Binario_hpp
#define Binario_hpp
using namespace std;

class Binario : public Numero {
protected:
    string num;
public:
    Binario();
    Binario(string num,char car);
    void convertir(string num);
};
#endif 
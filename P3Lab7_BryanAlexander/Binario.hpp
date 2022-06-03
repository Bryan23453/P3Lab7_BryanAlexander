#include <iostream>
#include <string>
#ifndef Binario_hpp
#define Binario_hpp
using namespace std;

class Binario : public Numero {
protected:
    string num;
public:
    int entero;
    Binario();
    Binario(string num);
};
#endif 
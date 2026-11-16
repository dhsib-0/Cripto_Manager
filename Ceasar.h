#ifndef CEASAR_H
#define CEASAR_H
#include <iostream>

class Ceasar{
public:
    Ceasar();
    void cifrado(int mov, std::string palabra);
    void decifrado();
    void cifradotxt(int mov);
};

#endif // CEASAR_H

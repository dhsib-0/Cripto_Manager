#ifndef CEASAR_H
#define CEASAR_H
#include <iostream>

class Ceasar{
public:
    Ceasar();
   std::string cifrado(int mov, std::string palabra,bool ver);
    void decifrado();
    void cifradotxt(int mov);
};

#endif // CEASAR_H

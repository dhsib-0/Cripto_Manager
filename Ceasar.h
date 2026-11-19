#ifndef CEASAR_H
#define CEASAR_H
#include <iostream>

class Ceasar{
public:
    Ceasar();
   std::string cifrado(int mov, std::string palabra,bool ver);
    std::string decifrado(int mov, std::string palabra,bool ver);
    void cifradotxt(int mov);
    void decifradotxt(int mov);
};

#endif // CEASAR_H

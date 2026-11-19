#ifndef XOR_H
#define XOR_H
#include <iostream>


class XOR{
public:
    XOR();
   std::string cifrado(int mov, std::string palabra,std::string Key);
    std::string decifrado(int mov, std::string palabra,std::string Key);
    void cifradotxt(int mov);
    void decifradotxt(int mov);
};

#endif // XOR_H

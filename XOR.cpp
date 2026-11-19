#include "Xor.h"
#include <fstream>

using namespace std;
XOR::XOR(){

}
string XOR::cifrado(int t, string palabra,string Key){
    string res;

    int leng = palabra.size();

    if(leng ==0){
        return "" ;
    }

    int cant = (leng+t-1)/t;

    char** bloques = new char*[cant];

    for(int i = 0;i<leng;i++){
        int f = i/t;
        int c = i%t;

        bloques[f][c] = palabra[i];
    }

    for(int i = 0; i<leng;i++){
        int f=i/t;
        int c = i%t;

        char letra = bloques[f][c];
        char k = Key[i%Key.size()];

    }


    for (int i = 0; i < leng; i++) {
        int f = i / t;
        int c = i % t;

        res += bloques[f][c];
    }


    for (int i = 0; i < cant; i++) {
        delete[] bloques[i];
    }

    delete[] bloques;

    return res;

}
string XOR::decifrado(int mov, string palabra,string Key){

}
void XOR::cifradotxt(int mov){

}
void XOR::decifradotxt(int mov){

}
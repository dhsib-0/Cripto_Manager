#include "Ceasar.h"
#include <fstream>
#include <string>
#include <cmath>
using namespace std;


Ceasar::Ceasar(){

}


string Ceasar::cifrado(int mov,string palabra,bool ver) {
    char temp;

        string res = "";

    for (int i = 0; i < palabra.size(); i++) {
        temp = palabra[i];

        if (temp >= 'A' && temp <= 'Z') {
            temp = 'A' + (temp - 'A' + mov) % 26;
        }
        else if (temp >= 'a' && temp <= 'z') {
            temp = 'a' + (temp - 'a' + mov) % 26;
        }

        res += temp;
    }

    return res;

}

 string Ceasar::decifrado(int mov, string palabra,bool ver){
     char temp;

     string res = "";

     for (int i = 0; i < palabra.size(); i++) {
         temp = palabra[i];

         if (temp >= 'A' && temp <= 'Z') {
             temp = 'A' + (temp - 'A' - mov) % 26;
         }
         else if (temp >= 'a' && temp <= 'z') {
             temp = 'a' + (temp - 'a' - mov) % 26;
         }

         res += temp;
     }

     return res;

 }


void Ceasar::cifradotxt(int mov) {
    string arch;
    string texto;

    cout << "Ingrese la ruta del archivo .txt a cifrar:\n";
    getline(cin >> ws, arch);

    ifstream palabra(arch);
    ofstream res("Salida.txt");

    if (!palabra.is_open()) {
        cout << "Error al abrir el archivo\n";
        return;
    }else{

    while (getline(palabra, texto)) {
        res << cifrado(mov, texto,false);
    }
    cout<<"Ya se cifro el texto en el archivo Salida.txt\n";
    }


}

void Ceasar::decifradotxt(int mov){
    string arch;
    string texto;

    cout << "Ingrese la ruta del archivo .txt a decifrar:\n";
    getline(cin >> ws, arch);

    ifstream palabra(arch);
    ofstream res("Salida.txt");

    if (!palabra.is_open()) {
        cout << "Error al abrir el archivo\n";
        return;
    }else{

        while (getline(palabra, texto)) {
            res << decifrado(mov, texto,false);
        }
        cout<<"Ya se cifro el texto en el archivo Salida.txt\n";
    }
}



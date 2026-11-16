#include "Ceasar.h"
#include <fstream>
#include <string>
using namespace std;


Ceasar::Ceasar(){

}


void Ceasar::cifrado(int mov,string palabra) {
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

    cout<<string(20,'=')<<"\n";
    cout <<"\t"<<res<<"\n";
    cout<<string(20,'=')<<"\n";

    system("pause");
}

void Ceasar::decifrado(){


}


void Ceasar::cifradotxt(int mov) {
    string arch;
    string texto;

    cout << "Ingrese la ruta del archivo .txt a cifrar:\n";
    getline(cin >> ws, arch);

    ifstream palabra(arch);

    if (!palabra.is_open()) {
        cout << "Error al abrir el archivo\n";
        return;
    }

    while (getline(palabra, texto)) {
        cifrado(mov, texto);
    }

    palabra.close();
}


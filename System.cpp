#include <iostream>
#include <string>
#include "System.h"
#include "Ceasar.h"
#include <limits>
using namespace std;
void print();
void printCeasar();
System::System(){

}

void System::MenuP(){
    int op = 0;
    do{
        op =0;
        print();
        cin>> op;

    while(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        system("cls");
        cout<<"\nError: Numero Invalido Favor intente nuevamenete\n";


        print();
        cin>>op;

    }
    switch(op){

    case 1:{
        Ceasar c;
        string palabra;
        int mov;
        printCeasar();
        cin>> op;

        while(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            system("cls");
            cout<<"\nError: Numero Invalido Favor intente nuevamenete\n";


            printCeasar();
            cin>>op;
        }
        //Opciones Ceasar
        switch (op) {
        case 1:{

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Ingrese la palabra a cifrar: ";
            getline(cin, palabra);

            cout << "Ingrese cuantos movimientos desea: ";
            cin >> mov;

            c.cifrado(mov, palabra);


            break;
        }
        case 2:{

            cout << "Ingrese cuantos movimientos desea: ";
            cin >> mov;
            c.cifradotxt(mov);

            break;
        }
        case 3:{
            break;
        }
        case 4:{

            break;
        }
        case 5:{
            return;
        }
        }


    }
    case 2:{

    }
    case 3:{

    }


    }

    }while(op != 4);
}

void print(){
    cout<<string(20,'=')<<"\n";
    cout<<"CRIPTO MANAGER\n";
    cout<<"1. Cifrado Cesar\n";
    cout<<"2. Cifrado XOR\n";
    cout<<"3. Cifrado Vigenere\n";
    cout<<"4. Salir\n";
    cout<<string(20,'=')<<"\n";
    cout<<"Seleccione: ";

}

void printCeasar(){
    cout<<string(20,'=')<<"\n";
    cout<<"--CIFRADO CEASAR--\n";
    cout<<"1. Cifrar Texto\n";
    cout<<"2. Cifrar Archivo.txt\n";
    cout<<"3. Decifrar Texto\n";
    cout<<"4. Decifrar Archivo.txt\n";
    cout<<"5. Volver al Menu Principal\n";
    cout<<string(20,'=')<<"\n";
    cout<<"Seleccione: ";
}
#include <iostream>
#include <cstring>
#include "usuarios.h"
#include "vendedores.h"

using namespace std;

void Vendedores::Alta(){

    Usuarios::Alta();
    cout <<"Dni: ";
    cin>> _dni;
    cin.ignore();
    cout <<"Telefono: ";
    cin.getline(_telefono,30);
    cout <<"Email: ";
    cin.getline(_email, 100);


  }

void Vendedores::Mostrar(){
    if (_estado==false){
        return;

    }
    Usuarios::Mostrar();
    cout << "Dni: " << _dni << endl;
    cout << "Telefono: " << _telefono << endl;
    cout << "Email: " << _email << endl;

  }

void Vendedores::Baja(){

    _estado= false;

   }

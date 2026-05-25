#include <iostream>
#include <cstring>
#include "usuarios.h"

using namespace std;
/*
Usuarios::Usuarios()
{
    _codUsuario =0;
    strcpy(_nombre,"");
    strcpy(_apellido,"")
    strcpy(_pass,"");
    strcpy(_nivel,"");

    _estado= true;

}*/

 void Usuarios::Alta(){

    cout << "Codigo de usuario: ";
    cin >> _codUsuario;
    cin.ignore();
    cout << "Nombre de usuario: ";
    cin.getline(_nombre,50);
    cout << "Apellido de usuario: ";
    cin.getline(_apellido,50);
    cout << "Contrasenia: ";
    cin.getline(_pass,50);
    cout << "Nivel: ";
    cin.getline(_nivel,20);
    _estado = true;


 }

 void Usuarios::Mostrar(){

    if(_estado== false){
        return;
    }
    cout << "Codigo de usuario: " << _codUsuario<< endl;
    cout << "Usuario: " << _nombre<<" "<<_apellido << endl;
    cout << "Nivel: " << _nivel<< endl;

 }
  void Usuarios::Baja(){
    char _opc;
    Usuarios::Mostrar();
    cout<<"confirma que desea dar de baja??(S/N)";
    cin>> _opc;
    if(_opc = 'S'){
       _estado= false;
    }


  }



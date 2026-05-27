#include <iostream>
#include <cstring>

#include "Cliente.h"

using namespace std;

//Constructor

Cliente::Cliente(){

 _codCliente=0;

  strcpy(_nombre, "");
 strcpy(_apellido, "");
 strcpy(_domicilio, "");
 strcpy(_telefono, "");
 strcpy(_email, "");
 strcpy(_condIva, "");
 strcpy(_cuit, "");

 _estado = true;
}

  //setters

 void Cliente::setcodCliente(int codCliente){

     _codCliente= codCliente;

 }

 void Cliente::setNombre(const char nombre[]){

     strcpy(_nombre, nombre);
 }

 void Cliente::setApellido(const char apellido[]){

    strcpy(_apellido, apellido);
 }

 void Cliente::setDomicilio(const char domicilio[]){

     strcpy(_domicilio, domicilio);

 }

 void Cliente::setEmail(const char email[]){

     strcpy(_email, email);
 }

 void Cliente::setTelefono(const char telefono[]){

     strcpy(_telefono, telefono);
 }

 void Cliente::setCodIva(const char condIva[]){


    strcpy(_condIva, condIva);
 }

 void Cliente::setCuit(const char cuit[]){

    strcpy(_cuit, cuit);
 }

 void Cliente::setEstado(bool estado){

        _estado= estado;
  }

  //getters


  int Cliente::getcodCliente(){

     return _codCliente;
  }

  const char* Cliente::getNombre(){


      return _nombre;
    }

    const char* Cliente::getApellido(){

     return _apellido;

    }

    const char* Cliente::getDomicilio(){

      return _domicilio;
    }

    const char* Cliente::getTelefono(){

     return _telefono;

    }

    const char* Cliente::getEmail(){


       return _email;
    }

    const char* Cliente::getCondIva(){

      return _condIva;
    }

    const char* Cliente::getCuit(){

     return _cuit;

    }

    bool Cliente::getEstado(){

     return _estado;
    }

    //metodos


    void Cliente::Alta(){

     cin.ignore();

    cout<<"Codigo de cliente: ";
    cin >>_codCliente;

    cin.ignore();

    cout <<"Nombre: ";
    cin.getline(_nombre,50);

    cout <<"Apellido: ";
    cin.getline(_apellido,50);

    cout <<"Domicilio: ";
    cin.getline(_domicilio,100);

    cout <<"Telefono: ";
    cin.getline(_telefono,30);

    cout <<"Email: ";
    cin.getline(_email,100);

    cout <<"Condicion de iva: ";
    cin.getline(_condIva,25);

    cout << "Cuit: ";
    cin.getline(_cuit,20);

    _estado = true;
}

  void Cliente::Mostrar(){

    if(_estado == false){
        return;
    }

    cout << "Codigo de cliente: " << _codCliente<< endl;
    cout << "Nombre: " << _nombre << endl;
    cout << "Apellido: " << _apellido << endl;
    cout << "Domicilio: " << _domicilio << endl;
    cout << "Telefono: " << _telefono << endl;
    cout << "Email: " << _email << endl;
    cout << "Iva: " << _condIva << endl;
    cout << "Cuit: " << _cuit << endl;
}

void Cliente::Baja(){

    _estado = false;
}






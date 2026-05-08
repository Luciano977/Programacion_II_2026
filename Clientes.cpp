#include <iostream>
#include <cstring>
#include "Clientes.h"


using namespace std;

///CONSTRUCTORES
Clientes::Clientes(){

   _CodCliente =0;
   strcpy(_nombre, "");
   strcpy(_apellido, "");
   strcpy(_domicilio, "");
   strcpy(_condIVA, "");
   _CUIT = 0;
}

///seters
void Clientes::setCodCliente(int CodCliente){
    _CodCliente = CodCliente;
}
void Clientes::setNombre(const char nombre[]){
    strcpy(_nombre, nombre);
}
void Clientes::setApellido(const char apellido[]){
    strcpy(_apellido, apellido);
}
void Clientes::setDomicilio(const char domicilio[]){
    strcpy(_domicilio, domicilio);
}
void Clientes::setCodIVA(const char condIVA[]){
    strcpy(_condIVA, condIVA);
}
void Clientes::setCUIT(int CUIT){
    _CUIT = CUIT;
}

///geters

int Clientes::getCodCliente(){
    return _CodCliente;
}
const char* Clientes::getNombre(){
    return _nombre;
}
const char* Clientes::getApellido(){
    return _apellido;
}
const char* Clientes::getDomicilio(){
    return _domicilio;
}
const char* Clientes::getCodIVA(){
    return _condIVA;
}
int Clientes::getCUIT(){
    return _CUIT;
}

///metodos
void Clientes::Alta(){
    cout<<"Ingrese el Codigo del cliente: ";
    cin>>_CodCliente;

    cout<<"Ingrese el Nombre del cliente: ";
    cin.getline(_nombre, 50);

    cout<<"Ingrese el Apellido del cliente: ";
    cin.getline(_apellido, 50);

    cout<<"Ingrese el Domicilio del cliente: ";
    cin.getline(_domicilio, 100);

    cout<<"Ingrese la Condicion ante el IVA del cliente: ";
    cin.getline(_condIVA, 25);

    cout<<"Ingrese la CUIT del cliente: ";
    cin>>_CUIT;

}
void Clientes::Consultar(){

}

void Clientes::Modificar(){

}
void Clientes::Baja(){

}
void Clientes::Mostrar(){
    cout<<"LOS DATOS INGRESADOS DEL CLIENTE SON:"<<endl;
    cout<<"Ingrese el Codigo del cliente: "<<_CodCliente;
    cout<<"Ingrese el Nombre del cliente: "<<_nombre;
    cout<<"Ingrese el Apellido del cliente: "<<_apellido;
    cout<<"Ingrese el Domicilio del cliente: "<<_domicilio;
    cout<<"Ingrese la Condicion ante el IVA del cliente: "<<_condIVA;
    cout<<"Ingrese la CUIT del cliente: "<<_CUIT;

}

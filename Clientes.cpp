#include <iostream>
#include "Clientes.h"


using namespace std;

///CONSTRUCTORES
Clientes::Clientes(){

}

///seters
void Clientes::setCodCliente(int CodCliente){
    _CodCliente = CodCliente;
}
void Clientes::setNombre(std::string nombre){
    _nombre = nombre;
}
void Clientes::setApellido(std::string apellido){
    _apellido = apellido;
}
void Clientes::setDomicilio(std::string domicilio){
    _domicilio = domicilio;
}
void Clientes::setCodIVA(std::string condIVA){
    _condIVA = condIVA;
}
void Clientes::setCUIT(int CUIT){
    _CUIT = CUIT;
}

///geters
int Clientes::getCodCliente(){
    return _CodCliente;
}
int Clientes::getNombre(){
    return _nombre;
}
int Clientes::getApellido(){
    return _apellido;
}
int Cliente::getDomicilio(){
    return _domicilio;
}
int Clientes::getCodIVA(){
    return _CodIVA;
}
int Cliente::getCUIT(){
    return _CUIT;
}

///metodos
void Clientes::Alta(){
    cout<<"Ingrese el Codigo del cliente: ";
    cin>>_CodCliente;
    cout<<"Ingrese el Nombre del cliente: ";
    cin>>_nombre;
    cout<<"Ingrese el Apellido del cliente: ";
    cin>>_apellido;
    cout<<"Ingrese el Domicilio del cliente: ";
    cin>>_domicilio;
    cout<<"Ingrese la Condicion ante el IVA del cliente: ";
    cin>>_condIVA;
    cout<<"Ingrese la CUIT del cliente: ";
    cin>>_condIVA;

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
    cout<<"Ingrese la CUIT del cliente: "<<_condIVA;

}

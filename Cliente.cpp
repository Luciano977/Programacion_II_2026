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

	if (codCliente<0){
        cout <<"raja para alla";
    }
	else {
     _codCliente= codCliente;

	}
}
void Cliente::setCodIva(const char condIva[]){
	strcpy(_condIva, condIva);
}

void Cliente::setCuit(const char cuit[]){
	strcpy(_cuit, cuit);
}
 
///getters
int Cliente::getcodCliente(){
	return _codCliente;
	
}
const char* Cliente::getCondIva(){
	return _condIva;
}

const char* Cliente::getCuit(){
	return _cuit;
	
}

    //metodos


void Cliente::Cargar(){

     cin.ignore();

    cout<<"Codigo de cliente: ";
    setcodCliente(_codCliente);
	cargarUsuario();
	cout <<"Condicion de iva: ";
	cin.getline(_condIva,25);
		cout << "Cuit: ";
	cin.getline(_cuit,20);

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







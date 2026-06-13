#include<iostream>
#include "Persona.h"
#include "Empleado.h"
#include "Cliente.h"
#include "ArchivoCliente.h"


using namespace std;
void usuarioSupervisor(){
	cout<<"---MENU DE SUPERVISOR---"<<endl;
	Empleado objSist;
	objSist.Cargar();
	system("pause");
}
void usuarioAdministrativo(){
	cout<<"---MENU DE ADMINISTRATIVO---"<<endl;
	Empleado objAdm;
	objAdm.Cargar();
	system("pause");

}
void usuarioVendedor(){
	int opc;
	cout<<"---MENU DE VENDEDOR---"<<endl;
	while(true){
		system("cls");
		cout<<"------------------------"<<endl;
		cout<<"1. CARGAR UN CLIENTE "<<endl;
		cout<<"2. CONSULTAR UN CLIENTE "<<endl;
		cout<<"3. CANTIDAD DE CLIENTES"<<endl;
		cout<<"0. SALIR"<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Ingrese la opcion deseada: ";
		cin>>opc;
		switch(opc){
		case 1: {Cliente objCliente;
				objCliente.Cargar();
				ArchivoCliente ta;
				if(ta.guardarRegistro(objCliente)){
					cout<<"Se guardo"<<endl;
				}
				else{
					cout<<"No se guardo"<<endl;
				}
				system("pause");
		}
			break;
		case 2: {Cliente objCliente;
				ArchivoCliente ta;
				ta.leer(1);
				objCliente.Mostrar();
				system("pause");
		}
			break;
		case 3: {int cantCliente;
				ArchivoCliente objCliente;
				cantCliente=objCliente.getCantidadClientes();
				cout<<"La cantidad de clientes es: "<<cantCliente;
				system("pause");
		}
				
		case 0: return;
		
	}
	
}
}

int main () {
	
	int opcion;
	string codUsuario[30];
	
	while(true){
		system("cls");
		cout<<"POR FAVOR INFORME QUIEN ESTA INGRESANDO AL SISTEMA"<<endl;
		cout<<"--------------------------------------------------\n"<<endl;
		cout<<"1. SUPERVISOR"<<endl;
		cout<<"2. ADMINISTRATIVO"<<endl;
		cout<<"3. VENDEDOR"<<endl;
		cout<<"0. SALIR DEL SISTEMA"<<endl;
		cout<<"--------------------------------------------------\n"<<endl;
		cout<<"INGRESE OPCION ELEGIDA: ";
		cin>>opcion;
		switch(opcion){
		case 1:	usuarioSupervisor();
			break;
		case 2: usuarioAdministrativo();
			break;
		case 3:	usuarioVendedor();
			break;
		case 0: {cout<<"Gracias por utilizar nuestro servicio"<<endl;
			system("pause");
			return 0;}
		
		default: cout<<"OPCION INCORRECTA, VUELVA A INGRESAR UNA OPCION"<<endl;
		system("pause");
				
		}
	}
	
	return 0;
}


#include <iostream>
#include <cstdlib>

#include "Archivocliente.h"

using namespace std;

ArchivoCliente::ArchivoCliente(std::string nombreArchivo)
: _nombreArchivo(nombreArchivo){
	
}
bool ArchivoCliente::guardarRegistro(const Cliente &reg){
	FILE *p;
	bool escribio;

	p= fopen(_nombreArchivo.c_str(),"ab");
	if (p==NULL){
		return false;
 }

	escribio= fwrite(&reg,sizeof(Cliente),1,p);
		fclose(p);
	
	return escribio;

}



Cliente ArchivoCliente::leer(int pos){
	Cliente reg;
	FILE *p;
	reg.setcodCliente(-1);

	p = fopen(_nombreArchivo.c_str(), "rb");
	if (p==NULL){
		return reg;
	}
	fseek(p, pos *sizeof(Cliente), SEEK_SET);
	
	fread(&reg, sizeof(Cliente),1,p);

	fclose(p);

 return reg;

}
int ArchivoCliente::getCantidadClientes(){
	FILE *p;
	int cant;
	
	p = fopen(_nombreArchivo.c_str(), "rb");
	if (p==NULL){
		return -1;
	}
	fseek(p, 0, SEEK_END);
	cant = ftell(p) / sizeof(Cliente);

	
	fclose(p);
	
	return cant;
	
}

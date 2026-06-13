#pragma once
#include <string>
#include "Cliente.h"

class ArchivoCliente{

public:
	ArchivoCliente(std::string nombreArchivo = "archClientes.dat");
	bool guardarRegistro(const Cliente &reg);
	Cliente leer(int pos);
	int getCantidadClientes();
	
	  
private:
	std::string _nombreArchivo;
	
	  



};


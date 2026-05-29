#pragma once
#include "Sistema.h"

class Cliente:public Sistema{
public:
	Cliente();
///setters
	void setCodCliente(int codCliente);
	void setCuit(const char* cuit);
	void setCondIva(const char* condIva);

///getters
	int getCodCliente();
	char* getCuit();
	char* getCondIva();
	
///metodos
	void Mostrar();
	void Modificar();
	void BajaLogica();
	void Alta();
	
	
	
	
private:
	int _codCliente;
	char* _cuit[20];
	char* _condIva[30];
	
};




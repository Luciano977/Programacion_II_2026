#pragma once
#include <cstring>
#include "Persona.h"

class Cliente:public Persona{

private:

    int _codCliente;
	char _condIva[25];
	char _cuit[20];
   

public:

     //setters

     Cliente();

	void setcodCliente(int codCliente);
	void setCodIva(const char condIva[]);	  
	void setCuit (const char cuit []);

     //getters

	int getcodCliente();
	const char* getCondIva();
	const char* getCuit();
      //metodos

	void Cargar();
	void Mostrar();
};

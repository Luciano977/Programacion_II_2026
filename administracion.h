#pragma once
#include "sistema.h"

class Administracion:public Sistema {
public:
	Administracion();
	
///setters
	void setCodAmin(int codAdmin);
	void setArea(const char* area);
	
	
///getters
	int getCodAdmin();
	char* getArea();
	
///metodos
	void Mostrar();
	void Modificar();
	void menuAdmin();
	void gestionStock();
	void informes();
	
private:
	
	int _codAdmin;
	char _area[50];

};




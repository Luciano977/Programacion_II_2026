#pragma once
#include "Sistema.h"

class Vendedor:public Sistema {
public:
	Vendedor();
	
///setters
	void setCodVendedor(int codVendedor);
	void setComision(float comision);
	
///getters
	int getCodVendedor();
	float getComision();
	
///metodos
	void Mostrar();
	void Modificar();
	void registrarCliente();
	void generarFactura();
	void menuVendedor();
	
	
private:
	int _codVendedor;
///	Fecha _fechaIngreso;
	float _comision;
	
	
};




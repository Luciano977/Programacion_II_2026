#pragma once

class Sistema {
public:
	Sistema();
	
///setters
	void setNombre(const char* nombre);
	void setApellido(const char* apellido);
	void setDni(int dni);
	void setDomicilio(const char* domicilio);
	void setTelefono(const char* telefono);
	void setEmail(const char* email);
	void setEstado(bool estado);
	
///getters
	char* getNombre();
	char* getApellido();
	int getDni();
	char* getDomicilio();
	char* getTelefono();
	char* getEmail();
	bool getEstado();
	
///metodos
	void Alta();
	void BajaLogica();
	void Mostrar();
	void Modificar();
	
	
protected:
	char _nombre[50];
	char _apellido[50];
	int _dni;
	char _domicilio[100];
	char _telefono[20];
	char _email[50];
	bool _estado;
	
};




#pragma once
#include <string>


class Clientes{
public:
    ///CONSTRUCTORES
    Clientes();
    ///seters
    void setCodCliente(int CodCliente);
    void setNombre(const char nombre[]);
    void setApellido(const char apellido[]);
    void setDomicilio(const char domicilio[]);
    void setCodIVA(const char condIVA[]);
    void setCUIT(int CUIT);

    ///geters
    int getCodCliente();
    int getNombre();
    int getApellido();
    int getDomicilio();
    int getCodIVA();
    int getCUIT();

    ///metodos
    void Alta();
    void Consultar();
    void Modificar();
    void Baja();
    void Mostrar();

private:

    int _CodCliente;
    char _nombre[50];
    char _apellido[50];
    char _domicilio[100];
    char _condIVA[25];
    int _CUIT;


};

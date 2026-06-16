#pragma once


#include "Cliente.h"

class ArchivoClientes{

private:

    char _nombre[30];

  public:

      ArchivoClientes(const char *nombre = "Cliente.dat");

      bool guardarRegistro(Cliente reg);

      Cliente leerRegistro(int pos);

      int contarRegistro();

      int buscarCliente(int codCliente);

      bool modificarRegistro(Cliente reg, int pos);

      bool bajaLogica (int codCliente);


};

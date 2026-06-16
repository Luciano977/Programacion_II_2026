#pragma once
#include "Factura.h"

class ArchivoFactura{

private:

    char _nombre[30];

public:

    ArchivoFactura(const char *nombre = "Factura.dat");

    bool guardarRegistro(Factura reg);

    Factura leerRegistro(int pos);

    int contarRegistros();

    int buscarFactura(int numeroFactura);

    bool modificarRegistro(Factura reg, int pos);

    bool bajaLogica(int numeroFactura);

};

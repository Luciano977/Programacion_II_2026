#pragma once

#include "DetalleFactura.h"

class ArchivoDetalleFactura{

private:

    char _nombre[30];

public:

    ArchivoDetalleFactura(const char *nombre = "DetalleFactura.dat");

    bool guardarRegistro(DetalleFactura reg);

    DetalleFactura leerRegistro(int pos);

    int contarRegistros();

    void listarDetallesFactura(int numFactura);

};

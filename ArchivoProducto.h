#pragma once

#include "Producto.h"

class ArchivoProducto{

private:

    char _nombre[30];

public:

    ArchivoProducto(const char *nombre = "Producto.dat");

    bool guardarRegistro(Producto reg);

    Producto leerRegistro(int pos);

    int contarRegistros();

    int buscarProducto(int codArticulo);

    bool modificarRegistro(Producto reg, int pos);

    bool bajaLogica(int codArticulo);


};

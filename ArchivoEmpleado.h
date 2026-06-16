#pragma once

#include "Empleado.h"

class ArchivoEmpleado{

  private:

    char _nombre[30];

  public:

    ArchivoEmpleado(const char* nombre= "Empleado.dat");

    bool guardarRegistro(Empleado reg);

    Empleado leerRegistro(int pos);

    int contarRegistros();

    int buscarRegistros(int codEmpleado);

    bool modificarRegistro(Empleado reg, int pos);

    bool bajaLogica(int codEmpleado);


};

#pragma once

#include <cstring>
#include "Persona.h"

class Empleado: public Persona {

  private:

      int _codEmpleado;
      int _nivel;        //1 vendedor, 2 administrativo
      bool _estado;

  public:

    Empleado(int codEmpleado=0, int tipoEmpleado=1,bool estado= true)

    void cargar();

    void mostrar();

    void setCodEmpleado(int codEmpleado);

    void setTipoEmpleado(int tipoEmpleado);

    void setEstado(bool estado);

    int getCodEmpleado();

    int getTipoEmpleado();

    bool getEstado();

};

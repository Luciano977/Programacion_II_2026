#ifndef ARCHIVOCLIENTES_H_INCLUDED
#define ARCHIVOCLIENTES_H_INCLUDED

#pragma once
#include "Clientes.h"

class ArchivoClientes {

  public:

      bool guardarRegistro(Clientes reg);

      bool listarRegistros();

};


#endif

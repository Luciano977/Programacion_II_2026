#pragma once

  #include <cstring>
  #include "Persona.h"

  class Cliente: public Persona{

private:

    int _codCliente;

    char _condIva[25];

    char _cuit[20];

public:

    Cliente();

    //setters

    void setCodCliente(int codCliente);

    void setCondIva(const char condIva[]);

    void setCuit(const char cuit[]);



    //getters

    int getCodCliente();

    const char* getCondIva();

    const char* getCuit();

    //metodos

    void cargar();

    void mostrar();

};

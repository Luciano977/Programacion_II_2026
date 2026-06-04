#pragma once

#include "Persona.h"

class Administrativo : public Persona{

private:

    int _codAdministrativo;

public:

  //costructor

    Administrativo();

    //setters

    void setCodAdministrativo(int codAdministrativo);

    //getters

    int getCodAdministrativo();

    //metodos

    void cargar();
    void mostrar();
};

#pragma once

#include "Persona.h"

class Vendedor : public Persona{

private:

    int _codVendedor;

public:

    Vendedor();

    //setters

    void setCodVendedor(int codVendedor);

    void setComision(float comision);

    //getters


    int getCodVendedor();

    float getComision();

    // Métodos

    void cargar();
    void mostrar();

};

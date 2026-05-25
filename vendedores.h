#pragma once
#include <cstring>
#include "usuarios.h"

class Vendedores:public Usuarios{

 private:
    int _dni;
    char _telefono[30];
    char _email[100];
    bool _estado;

 public:

    void Alta();
    void Mostrar();
    void Baja();

};



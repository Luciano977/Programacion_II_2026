#pragma once

#include <cstring>

 class Usuarios{

protected:
    int _codUsuario;
    char _nombre[50];
    char _apellido[50];
    char _pass[50];
    char _nivel[20];
    bool _estado;

public:

    void Alta();
    void Mostrar();
    void Baja();

 };



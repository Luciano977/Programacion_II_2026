#pragma once


 #include <cstring>

 class Usuario{

private:

    int _codUsuario;

    char _nomUsuario[30];

    char _pass[50];

    char _nivel[20];

    bool _estado;

public:


    Usuario();

    //setters

    void setCodUsuario(int CodUsuario);

    void setNombreUsuario(const char nombreUsuario[]);

    void setPass(const char pass[]);

    void setNivel(const char nivel[]);

    void setEstado(bool estado);

    //getters

    int getCodUsuario();

    const char* getnombreUsuario();

    const char* getPass();

    const char* getNivel();

    bool getEstado();


    //metodos

    void cargar();

    void mostrar();
 };

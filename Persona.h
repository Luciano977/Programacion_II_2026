#pragma once


class Persona{

protected:

    char _nombre[50];
    char _apellido[50];
    int   _dni;
    char _domicilio[100];
    char _telefono[20];
    char _email[50];
    bool _estado;

public:

    Persona();

    //setters

    void setNombre(const char* nombre);

    void setApellido(const char* apellido);

    void setDni(int dni);

    void setDomicilio(const char* domicilio);

    void setTelefono(const char* telefono);

    void setEmail(const char* email);

    void setEstado(bool estado);


    //getters

    const char* getNombre();

    const char* getApellido();

    int getDni();

    const char* getDomicilio();

    const char* getTelefono();

    const char* getEmail();

    bool getEstado();



    //metodos


    void cargar();

    void mostrar();


};

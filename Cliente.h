#pragma once

  #include <cstring>

  class Cliente{

private:

    int _codCliente;

    char _nombre[50];
    char _apellido[50];
    char _domicilio[100];
    char _telefono[30];
    char _email[100];
    char _condIva[25];
    char _cuit[20];

    bool _estado;

public:

     //setters

     Cliente();

     void setcodCliente(int codCliente);

     void setNombre(const char nombre[]);

     void setApellido(const char apellido[]);

     void setDomicilio(const char domicilio[]);

     void setTelefono(const char telefono[]);

     void setEmail(const char email[]);

     void setCodIva(const char condIva[]);

     void setCuit (const char cuit []);

     void setEstado(bool estado);

     //getters

     int getcodCliente();

     const char* getNombre();

     const char* getApellido();

     const char* getDomicilio();

     const char* getTelefono();

     const char* getEmail();

     const char* getCondIva();

     const char* getCuit();

     bool getEstado();




      //metodos

      void Alta();
      void Mostrar();
      void Baja();
};

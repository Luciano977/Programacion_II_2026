#pragma once



class Clientes{
public:
    ///CONSTRUCTORES
    Clientes();
    ///seters
    void setCodCliente(int CodCliente);
    void setNombre(std::string nombre);
    void setApellido(std::string apellido);
    void setDomicilio(std::string domicilio);
    void setCodIVA(std::string condIVA);
    void setCUIT(int CUIT);

    ///geters
    int getCodCliente();
    int getNombre();
    int getApellido();
    int getDomicilio();
    int getCodIVA();
    int getCUIT();

    ///metodos
    void Alta();
    void Consultar();
    void Modificar();
    void Baja();
    void Mostrar();

private:

    int _CodCliente;
    std::string _nombre;
    std::string _apellido;
    std::string _domicilio;
    std::string _condIVA;
    int _CUIT;



};

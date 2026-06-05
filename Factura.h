#pragma once

class Facturas{

  private:

      char _letra;

      int _numero;

      int _fechaEmision;

      int _codCliente;

      int _codVendedor;

      float _importe;

      float _importeIVA;

      float _totalNeto;

      bool _estado;

  public:

    Facturas();

    void Alta();

    void Mostrar();

    void Baja();

};


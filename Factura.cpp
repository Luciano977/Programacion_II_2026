#include <iostream>
#include "Factura.h"

using namespace std;

Facturas::Facturas(){

 _letra = 'A';

 _numero = 0;

 _fechaEmision = 0;

 _codCliente = 0;

 _codVendedor = 0;

 _importe = 0;

 _importeIVA = 0;

 _totalNeto = 0;

 _estado = true;

}

 void Facturas::Alta()
{
   cout <<"Letra factura: ";
   cin >> _letra;

   cout <<"Numero factura: ";
   cin >> _numero;

   cout <<"Fecha emision: ";
   cin >> _fechaEmision;

   cout <<"Codigo cliente: ";
   cin >> _codCliente;

   cout <<"Codigo vendedor: ";
   cin >> _codVendedor;

   cout <<"Importe: ";
   cin >>_importe;

   cout <<"Iva: ";
   cin >> _importeIVA;

   cout <<"Total neto: ";
   cin >> _totalNeto;

   _estado = true;


}

void Facturas::Mostrar(){

   if (_estado==false){

     return;

   }

    cout << "Factura: " << _letra << " " << _numero << endl;
    cout << "Fecha: " << _fechaEmision << endl;
    cout << "Codigo cliente: " << _codCliente << endl;
    cout << "Codigo vendedor: " << _codVendedor << endl;
    cout << "Importe: " << _importe << endl;
    cout << "IVA: " << _importeIVA << endl;
    cout << "Total neto: " << _totalNeto << endl;
}

 void Facturas::Baja(){

    _estado= false;

 }

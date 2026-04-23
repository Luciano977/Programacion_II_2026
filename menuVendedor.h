#include<iostream>
#include<string>

using namespace std;

int menuVendedor(){
    int opcion;
    while(true){
        system("cls");
        cout << "****** ELEGISTE EL MENU VENDEDOR ******" << endl;
        cout << "1. CONSULTA DE CLIENTES" << endl;
        cout << "2. DAR DE ALTA UN CLIENTE" << endl;
        cout << "3. CONSULTAR EL STOCK" << endl;
        cout << "4. FACTURAR UNA VENTA" << endl;
        cout << "0. REGRESAR AL MENU ANTERIOR" << endl;
        cout << "************************" << endl<<endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opcion;
        system("cls");
        switch(opcion){
            case 1: cout<<"Elegiste la opcion 1"<< endl;
                    break;
            case 2: cout<<"Elegiste la opcion 2"<< endl;
                    break;
            case 3: cout<<"Elegiste la opcion 3"<< endl;
                    break;
            case 4: cout<<"Elegiste la opcion 4"<< endl;
                    break;
            case 0: cout<<"REGRESARAS AL MENU ANTERIOR"<<endl;
                    return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");

    }
}

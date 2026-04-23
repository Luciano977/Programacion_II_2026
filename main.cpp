#include <iostream>
#include "menuAdministrador.h"
#include "menuAdministracion.h"
#include "menuVendedor.h"

using namespace std;

int main(){
    int opc;
    while(true){
        system("cls");
        cout << "****** SISTEMA DE GESTION ******" << endl;
        cout << "Quien ingresara al sistema"<<endl;
        cout << "1. MENU ADMINISTRADOR" << endl;
        cout << "2. MENU ADMINISTRACION" << endl;
        cout << "3. MENU VENDEDOR"<< endl;
        cout << "0. FIN DEL PROGRAMA" << endl;
        cout << "********************************" << endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: menuAdministrador();
                    break;
            case 2: menuAdministracion();
                    break;
            case 3: menuVendedor();
                    break;
            case 0: cout<<" Muchas gracias por utilizar nuestro programa..."<< endl;
                    return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");
    }
    return 0;
}


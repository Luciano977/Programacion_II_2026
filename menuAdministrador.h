#include<iostream>
#include<string>

using namespace std;

int menuAdministrador(){
    int opc;
    while(true){
        system("cls");
        cout << "****** ELEGISTE EL MENU ADMINISTRADOR ******" << endl;
        cout << "1. DAR DE ALTA NUEVO USUARIO" << endl;
        cout << "2. OTORGAR PERMISOS A USUARIOS" << endl;
        cout << "0. RETORNAR AL MENU ANTERIOR" << endl;
        cout << "************************" << endl<<endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cout<<"Elegiste la opcion 1"<< endl;
                    break;
            case 2: cout<<"Elegiste la opcion 2"<< endl;
            case 0: return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");


    }


}


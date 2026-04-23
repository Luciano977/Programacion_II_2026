#include<iostream>
#include<string>

using namespace std;

int menuAdministracion(){
    int opc;
    while(true){
        system("cls");
        cout << "****** ELEGISTE EL MENU ADMINISTRACION ******" << endl;
        cout << "1. CONSULTAR EL STOCK" << endl;
        cout << "2. ACTUALIZAR EL STOCK" << endl;
        cout << "3. RANKING DE VENDEDORES" << endl;
        cout << "4. CONSULTA DE RECAUDACION DIARIA/ MENSUAL/ ANUAL" << endl;
        cout << "5. CONSULTA DE FACTURACION DIARIA/ MENSUAL/ ANUAL" << endl;
        cout << "6. REPORTE DE MOROSIDAD" << endl;
        cout << "0. RETORNAR AL MENU ANTERIOR" << endl;
        cout << "************************" << endl<<endl;
        cout << "SELECCIONAR OPCION " << endl;
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: cout<<"Elegiste la opcion 1"<< endl;
                    break;
            case 2: cout<<"Elegiste la opcion 2"<< endl;
                    break;
            case 3: cout<<"Elegiste la opcion 3"<< endl;
                    break;
            case 4: cout<<"Elegiste la opcion 4"<< endl;
                    break;
            case 5: cout<<"Elegiste la opcion 5"<< endl;
                    break;
            case 6: cout<<"Elegiste la opcion 6"<< endl;
                    break;
            case 0: cout<<"REGRESARAS AL MENU ANTERIOR"<<endl;
                    return 0;
                    break;
            default: cout<<"LA SELECCION NO ES CORRECTA"<<endl;

        }
        system("pause");


    }
}

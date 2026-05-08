#include <iostream>
#include <cstdio>
#include "ArchivoClientes.h"

using namespace std;

bool ArchivoClientes::guardarRegistro(Clientes reg){


 FILE *p;

 p = fopen("Clientes.dat","ab");

 if (p==NULL){

    return false;
 }

 bool escribio= fwrite(&reg, sizeof(Clientes),1,p);

 fclose(p);

 return escribio;
}

bool ArchivoClientes::listarRegistros(){

 Clientes reg;

 FILE *p;

 p= fopen("Clientes.dat","rb");

 if(p==NULL){

    return false;
 }

 while (fread(&reg,sizeof(Clientes),1,p)==1){

    reg.Mostrar();

    cout<<endl;
 }
 fclose(p);

 return true;
}

#include <cstring>

#include "Archivocliente.h"

using namespace std;

ArchivoClientes::ArchivoClientes(const char *nombre){

  strcpy(_nombre, nombre);

}

bool ArchivoClientes::guardarRegistro(Cliente reg){ //guarda

 FILE* pFile;

 pFile= fopen(_nombre; "ab");

 if (pFile== nullptr){

    return false,

 }

  bool escribio = fwrite(&reg, sizeof(Cliente),1, pFile);

  fclose(pFile);

  return escribio;
}

Cliente ArchivoClientes::leerRegistro(int pos ){ //leer


  Cliente reg;

  FILE *pFile;

  pFile = fopen(_nombre, "rb");

  if (pFile== nullptr){

    return reg;

  }

  fseek(pFile, pos * sizeof(Cliente), SEEK_SET)

  fread(&reg, sizeof(Cliente),1,pFile);

  fclose(pFile);

  return reg;


}
int ArchivoCliente::contarRegistros(){

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){


        return 0;
    }

    fseek(pFile, 0, SEEK_END);

    int cantidad = ftell(pFile) / sizeof(Cliente);

    fclose(pFile);

    return cantidad;

}

int ArchivoCliente::buscarCliente(int codCliente){ //buscar

    Cliente reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return -1;
    }


   int pos = 0;

    while(fread(&reg, sizeof(Cliente), 1, pFile) == 1){

        if(reg.getCodCliente() == codCliente){

            fclose(pFile);

            return pos;
        }

        pos++;
    }


 fclose(pFile);

    return -1;
}

bool ArchivoCliente::modificarRegistro(Cliente reg, int pos){

    FILE *pFile;

    pFile = fopen(_nombre, "rb+");

    if(pFile == nullptr){


        return false;
    }

    fseek(pFile, pos * sizeof(Cliente), SEEK_SET);

    bool escribio = fwrite(&reg, sizeof(Cliente), 1, pFile);

    fclose(pFile);

    return escribio;
}

bool ArchivoCliente::bajaLogica(int codCliente){ //baja

    int pos = buscarCliente(codCliente);

    if(pos < 0){

        return false;
    }

    Cliente reg = leerRegistro(pos);

    reg.setEstado(false);

    return modificarRegistro(reg, pos);
}

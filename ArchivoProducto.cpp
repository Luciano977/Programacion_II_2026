#include <cstring>
#include <cstdio>

#include "ArchivoProducto.h"

using namespace std;

ArchivoProducto::ArchivoProducto(const char *nombre){

    strcpy(_nombre, nombre);

}

bool ArchivoProducto::guardarRegistro(Producto reg){

    FILE *pFile;

    pFile = fopen(_nombre, "ab");

    if(pFile == nullptr){

        return false;
    }

    bool escribio = fwrite(&reg, sizeof(Producto), 1, pFile);

    fclose(pFile);

    return escribio;
}

Producto ArchivoProducto::leerRegistro(int pos){

    Producto reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return reg;
    }

    fseek(pFile, pos * sizeof(Producto), SEEK_SET);


    fread(&reg, sizeof(Producto), 1, pFile);

    fclose(pFile);

    return reg;
}

int ArchivoProducto::contarRegistros(){

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return 0;
    }

    fseek(pFile, 0, SEEK_END);

    int cantidad = ftell(pFile) / sizeof(Producto);

    fclose(pFile);

    return cantidad;
}

int ArchivoProducto::buscarProducto(int codArticulo){

    Producto reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){
        return -1;
    }

    int pos = 0;

    while(fread(&reg, sizeof(Producto), 1, pFile) == 1){

        if(reg.getCodArticulo() == codArticulo){

            fclose(pFile);

            return pos;
        }

        pos++;
    }

    fclose(pFile);

    return -1;
}

bool ArchivoProducto::modificarRegistro(Producto reg, int pos){

    FILE *pFile;

    pFile = fopen(_nombre, "rb+");

    if(pFile == nullptr){
        return false;
    }

    fseek(pFile, pos * sizeof(Producto), SEEK_SET);

    bool escribio = fwrite(&reg, sizeof(Producto), 1, pFile);

    fclose(pFile);

    return escribio;
}

bool ArchivoProducto::bajaLogica(int codArticulo){

    int pos = buscarProducto(codArticulo);

    if(pos < 0){
        return false;
    }

    Producto reg = leerRegistro(pos);

    reg.setEstado(false);

    return modificarRegistro(reg, pos);
}

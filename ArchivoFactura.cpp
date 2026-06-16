#include <cstring>
#include <cstdio>

#include "ArchivoFactura.h"

using namespace std;

ArchivoFactura::ArchivoFactura(const char *nombre){

    strcpy(_nombre, nombre);

}

bool ArchivoFactura::guardarRegistro(Factura reg){

    FILE *pFile;

    pFile = fopen(_nombre, "ab");

    if(pFile == nullptr){


        return false;
    }

    bool escribio = fwrite(&reg, sizeof(Factura), 1, pFile);

    fclose(pFile);

    return escribio;
}

Factura ArchivoFactura::leerRegistro(int pos){

    Factura reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return reg;
    }

    fseek(pFile, pos * sizeof(Factura), SEEK_SET);

    fread(&reg, sizeof(Factura), 1, pFile);

    fclose(pFile);

    return reg;
}

int ArchivoFactura::contarRegistros(){

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return 0;
    }

    fseek(pFile, 0, SEEK_END);

    int cantidad = ftell(pFile) / sizeof(Factura);

    fclose(pFile);

    return cantidad;
}

int ArchivoFactura::buscarFactura(int numeroFactura){

    Factura reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return -1;
    }

    int pos = 0;

    while(fread(&reg, sizeof(Factura), 1, pFile) == 1){

        if(reg.getNumero() == numeroFactura){

            fclose(pFile);

            return pos;
        }

        pos++;

    }

    fclose(pFile);

    return -1;
}

bool ArchivoFactura::modificarRegistro(Factura reg, int pos){

    FILE *pFile;

    pFile = fopen(_nombre, "rb+");

    if(pFile == nullptr){

        return false;
    }

    fseek(pFile, pos * sizeof(Factura), SEEK_SET);

    bool escribio = fwrite(&reg, sizeof(Factura), 1, pFile);

    fclose(pFile);

    return escribio;
}

bool ArchivoFactura::bajaLogica(int numeroFactura){

    int pos = buscarFactura(numeroFactura);

    if(pos < 0){

        return false;
    }

    Factura reg = leerRegistro(pos);

    reg.setEstado(false);

    return modificarRegistro(reg, pos);

}

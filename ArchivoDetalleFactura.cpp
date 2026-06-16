#include <cstring>
#include <cstdio>
#include "ArchivoDetalleFactura.h"

using namespace std;

ArchivoDetalleFactura::ArchivoDetalleFactura(const char *nombre){

    strcpy(_nombre, nombre);

}

bool ArchivoDetalleFactura::guardarRegistro(DetalleFactura reg){

    FILE *pFile;

    pFile = fopen(_nombre, "ab");

    if(pFile == nullptr){

        return false;
    }

    bool escribio = fwrite(&reg, sizeof(DetalleFactura), 1, pFile);

    fclose(pFile);

    return escribio;
}

DetalleFactura ArchivoDetalleFactura::leerRegistro(int pos){

    DetalleFactura reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr)
        {
        return reg;
    }

    fseek(pFile, pos * sizeof(DetalleFactura), SEEK_SET);

    fread(&reg, sizeof(DetalleFactura), 1, pFile);

    fclose(pFile);

    return reg;
}

int ArchivoDetalleFactura::contarRegistros(){

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return 0;
    }

    fseek(pFile, 0, SEEK_END);

    int cantidad = ftell(pFile) / sizeof(DetalleFactura);

    fclose(pFile);

    return cantidad;
}

void ArchivoDetalleFactura::listarDetallesFactura(int numFactura){

    DetalleFactura reg;

    FILE *pFile;

    pFile = fopen(_nombre, "rb");

    if(pFile == nullptr){

        return;
    }

    while(fread(&reg, sizeof(DetalleFactura), 1, pFile) == 1){

        if(reg.getNumFactura() == numFactura){

            reg.mostrar();

        }

    }

    fclose(pFile);

}

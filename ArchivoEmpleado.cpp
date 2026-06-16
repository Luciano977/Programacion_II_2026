#include <cstring>
#include <cstdio>

#include "ArchivoEmpleado.h"

using namespace std;

ArchivoEmpleado::ArchivoEmpleado(const char *nombre){

   strcpy(_nombre, nombre);

}


bool ArchivoEmpleado::guardarRegistro(Empleado reg){

   FILE*pFile;

   pFile= fopen(_nombre, "ab");

   if (pFile==nullptr){

     return false;
   }

   bool escribio= fwrite(&reg, sizeof(Empleado),1,pFile);

   fclose(pFile);

   return escribio;

}

Empleado ArchivoEmpleado::leerRegistro(int pos){


  Empleado reg;

  FILE * pFile;

  pFile = fopen(_nombre, "rb");

  if (pFile==nullptr){

    return reg;

  }

  fseek(pFile, 0, SEEK_END);

  int cantidad= ftell(pFile)/ sizeof(Empleado);

  fclose(pFile);

  return cantidad;

}

int ArchivoEmpleado::buscarEmpleado(int codEmpleado){

   Empleado reg;

   FILE *pFile;

   pFile = fopen(_nombre, "rb");

   if (pFile==nullptr){

     return -1;

   }

   int pos =0;

   while (fread(&reg,sizeof(Empleado),1,pFile)==1){

    if (reg.getCodEmpleado()==codEmpleado){

        fclose(pFile);


        return pos;


    }
     pos++;

   }
fclose(pFile);

return -1;

}

bool ArchivoEmpleado::modificarRegistro(Empleado reg, int pos){


  FILE* pFile;

  pFile= fopen(_nombre, "rb+");

  if (pFile==nullptr){

    return false;

  }


  fseek(pFile, pos * sizeof(Empleado), SEEK_SET);

  bool escribio = fwrite(&reg,sizeof (Empleado),1,pFile);

  fclose(pFile);

  return escribio;

}

bool ArchivoEmpleado::bajaLogica(int codEmpleado){

   int pos= buscarEmpleado(codEmpleado);


   if (pos<0){


    return false;
   }

   Empleado reg = leerRegistro(pos);

   reg.setEstado(false);

   return modificarRegistro(reg, pos);

}

#include <cstring>

#include "Login.h"
#include "ArchivoEmpleado.h"

Empleado Login::autenticar(const char *usuario,const char *pass){

    ArchivoEmpleado arch;
    Empleado reg;

    int cant = arch.contarRegistros();

    for(int i=0; i<cant; i++){

        reg = arch.leerRegistro(i);

        if(reg.getEstado()==true && strcmp(reg.getUsuario(), usuario)==0 &&

           strcmp(reg.getPass(), pass)==0){

            return reg;
        }
    }


    return Empleado();

}

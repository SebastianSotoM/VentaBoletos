//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_ESTRUCTURABASE_H
#define VENTABOLETOS_ESTRUCTURABASE_H

#include "../nodos/Nodo.h"

class EstructuraBase {
protected:
    int longitud;
    Nodo *cabeza;
public:
    virtual bool insertarInicio(Nodo *) = 0;
    virtual bool insertarFinal(Nodo *) = 0;
    virtual bool insertarOrdenado(Nodo *) = 0;
    virtual bool eliminar(int) = 0;
    virtual bool isChild(Nodo *) = 0;

    EstructuraBase();
    int getLongitud();
    void setLongitud(int);
    Nodo *getCabeza();
    void setCabeza(Nodo *);
    bool esVacia();
};


#endif //VENTABOLETOS_ESTRUCTURABASE_H

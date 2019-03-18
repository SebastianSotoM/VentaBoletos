//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_LISTAASIENTOS_H
#define VENTABOLETOS_LISTAASIENTOS_H

#include <iostream>
#include "EstructuraBase.h"
#include "../nodos/NodoAsiento.h"

class ListaAsientos : public EstructuraBase {
private:
    int precioAsiento;
    int precioTotal;
public:
    ListaAsientos();

    ListaAsientos(int _precioAsiento);

    int getPrecioAsiento() const;

    void setPrecioAsiento(int precioAsiento);

    int getPrecioTotal() const;

    void calcPrecioTotal(int);

    bool insertarInicio(Nodo *nuevo) {
        if(isChild(nuevo)){
            NodoAsiento *n = (NodoAsiento *) nuevo;
            if(esVacia()){
                setCabeza(n);
            }else{
                n->setSiguiente(getCabeza());
                setCabeza(n);
            }
            longitud++;
            return true;
        }
        return false;
    }

    bool insertarFinal(Nodo *nuevo) {
        if(isChild(nuevo)){
            NodoAsiento *n = (NodoAsiento *) nuevo;


            longitud++;
            return true;
        }
        return false;
    }

    bool insertarOrdenado(Nodo *nuevo) {
        if(isChild(nuevo)){
            NodoAsiento *n = (NodoAsiento *) nuevo;


            longitud++;
            return true;
        }
        return false;
    }

    bool eliminar(int) {
        return false;
    }

    NodoAsiento *buscarIndice(int index);

    NodoAsiento *buscarCedulaReservacion(std::string ced);

    bool isChild(Nodo * toCast) {
        if(toCast->getClassName() == "NodoAsiento")
            return true;
        return false;
    }

};


#endif //VENTABOLETOS_LISTAASIENTOS_H

//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_LISTAASIENTOS_H
#define VENTABOLETOS_LISTAASIENTOS_H

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

    void setPrecioTotal(int precioTotal);

    bool insertarInicio(Nodo *nuevo) {
        NodoAsiento *nodo = static_cast<NodoAsiento *>(nuevo);
        return nodo->esPago();
    }

    bool insertarFinal(Nodo *) {
        return false;
    }

    bool insertarOrdenado(Nodo *) {
        return false;
    }

    bool eliminar(int) {
        return false;
    }

    bool buscar(int) {
        return false;
    }

};


#endif //VENTABOLETOS_LISTAASIENTOS_H

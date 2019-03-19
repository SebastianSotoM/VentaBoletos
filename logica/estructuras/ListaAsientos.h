//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_LISTAASIENTOS_H
#define VENTABOLETOS_LISTAASIENTOS_H

#include "../nodos/NodoAsiento.h"

class ListaAsientos {
private:
    NodoAsiento *cabeza;
    int precioAsiento;
    int precioTotal;
    int longitud;

public:
    ListaAsientos();

    ListaAsientos(int precioAsiento);

    NodoAsiento *getCabeza() const;

    void setCabeza(NodoAsiento *cabeza);

    int getPrecioAsiento() const;

    void setPrecioAsiento(int precioAsiento);

    int getPrecioTotal() const;

    void setPrecioTotal(int precioTotal);

    int getLongitud() const;

    void setLongitud(int longitud);

    bool esVacia();

    void insertarInicio(NodoAsiento * nodo);

    NodoAsiento * buscarIndice(int indice);

    NodoAsiento * buscarCedReservacion(std::string cedReservacion);

};


#endif //VENTABOLETOS_LISTAASIENTOS_H

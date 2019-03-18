//
// Created by sebas on 3/17/2019.
//

#include "ListaAsientos.h"
#include "../nodos/NodoAsiento.h"

ListaAsientos::ListaAsientos(){
    this->precioTotal = 0;
    this->precioAsiento = 0;
}

ListaAsientos::ListaAsientos(int _precioAsiento){

    this->precioTotal = 0;
    this->precioAsiento = _precioAsiento;
}

int ListaAsientos::getPrecioAsiento() const {
    return precioAsiento;
}

void ListaAsientos::setPrecioAsiento(int precioAsiento) {
    ListaAsientos::precioAsiento = precioAsiento;
}

int ListaAsientos::getPrecioTotal() const {
    return precioTotal;
}

void ListaAsientos::setPrecioTotal(int precioTotal) {
    ListaAsientos::precioTotal = precioTotal;
}



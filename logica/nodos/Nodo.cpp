//
// Created by sebas on 3/17/2019.
//

#include "Nodo.h"

Nodo::Nodo() {
    this->siguiente = nullptr;
}

Nodo* Nodo::getSiguiente() {
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo *_siguiente) {
    this->siguiente = _siguiente;
}
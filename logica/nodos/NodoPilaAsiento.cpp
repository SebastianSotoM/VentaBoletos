//
// Created by sebas on 3/20/2019.
//

#include "NodoPilaAsiento.h"

NodoPilaAsiento::NodoPilaAsiento() {
    this->pila = nullptr;
    this->siguiente = nullptr;
}

NodoPilaAsiento::NodoPilaAsiento(int precioAsiento, int maxLongitudPila) {
    PilaAsientos *pilaAsientos = new PilaAsientos(precioAsiento,maxLongitudPila);
    this->pila = pilaAsientos;
    this->siguiente = nullptr;
}

NodoPilaAsiento *NodoPilaAsiento::getSiguiente() const {
    return siguiente;
}

void NodoPilaAsiento::setSiguiente(NodoPilaAsiento *siguiente) {
    NodoPilaAsiento::siguiente = siguiente;
}

PilaAsientos *NodoPilaAsiento::getPila() const {
    return pila;
}

void NodoPilaAsiento::setPila(PilaAsientos *pila) {
    NodoPilaAsiento::pila = pila;
}



//
// Created by sebas on 3/17/2019.
//

#include "EstructuraBase.h"

EstructuraBase::EstructuraBase(){
    this->cabeza = nullptr;
    this->longitud = 0;
}

void EstructuraBase::setCabeza(Nodo *_cabeza) {
    this->cabeza = _cabeza;
}
Nodo* EstructuraBase::getCabeza() {
    return this->cabeza;
}

void EstructuraBase::setLongitud(int value) {
    this->longitud = value;
}

int EstructuraBase::getLongitud() {
    return this->longitud;
}
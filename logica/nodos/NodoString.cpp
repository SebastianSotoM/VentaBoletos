//
// Created by sebas on 3/30/2019.
//

#include "NodoString.h"

NodoString *NodoString::getSiguiente() const {
    return siguiente;
}

void NodoString::setSiguiente(NodoString *siguiente) {
    NodoString::siguiente = siguiente;
}

const std::string &NodoString::getValue() const {
    return value;
}

void NodoString::setValue(const std::string &value) {
    NodoString::value = value;
}

NodoString::NodoString(const std::string &value){
    this->value = value;
    this->siguiente = nullptr;
}

NodoString::NodoString() {
    this->value = "";
    this->siguiente = nullptr;
    this->anterior = nullptr;
}

NodoString *NodoString::getAnterior() const {
    return anterior;
}

void NodoString::setAnterior(NodoString *anterior) {
    NodoString::anterior = anterior;
}

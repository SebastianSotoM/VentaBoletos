//
// Created by sebas on 3/17/2019.
//

#include "ListaAsientos.h"

ListaAsientos::ListaAsientos() {
    this->precioTotal = 0;
    this->precioAsiento = 0;
}

ListaAsientos::ListaAsientos(int _precioAsiento) {

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

void ListaAsientos::calcPrecioTotal(int _precioTotal) {
    NodoAsiento *aux = (NodoAsiento *) getCabeza();
    int pagados = 0;
    while (aux != nullptr) {
        if (aux->esPago()) {
            pagados++;
        }
    }
    this->precioTotal = pagados * precioAsiento;
}

NodoAsiento *ListaAsientos::buscarIndice(int index) {
    if (!esVacia()) {
        NodoAsiento *aux = (NodoAsiento *) getCabeza();
        int i = 0;
        while (i != index && aux != nullptr) {
            aux = (NodoAsiento *) aux->getSiguiente();
        }
        return (aux == nullptr)?nullptr:aux;
    }
}

NodoAsiento *ListaAsientos::buscarCedulaReservacion(std::string ced) {
    if (!esVacia()) {
        NodoAsiento *aux = (NodoAsiento *) getCabeza();
        while (aux != nullptr && aux->getCedulaReservacion() != ced) {
            aux = (NodoAsiento *) aux->getSiguiente();
        }
        return aux;
    }
    return nullptr;
}
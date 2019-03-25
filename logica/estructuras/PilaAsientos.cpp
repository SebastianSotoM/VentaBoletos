//
// Created by sebas on 3/20/2019.
//

#include "PilaAsientos.h"

PilaAsientos::PilaAsientos() {
    this->cabeza = nullptr;
    this->precioAsiento = 5500;
    this->precioTotal = 0;
    this->longitud = 0;
    this->maxLongitud = 5;
    this->full = false;
}

PilaAsientos::PilaAsientos(int precioAsiento, int maxLongitud) {
    this->cabeza = nullptr;
    this->precioAsiento = precioAsiento;
    this->precioTotal = 0;
    this->longitud = 0;
    this->maxLongitud = maxLongitud;
    this->full = false;
}

NodoAsiento *PilaAsientos::getCabeza() const {
    return cabeza;
}

void PilaAsientos::setCabeza(NodoAsiento *cabeza) {
    PilaAsientos::cabeza = cabeza;
}

int PilaAsientos::getLongitud() const {
    return longitud;
}

void PilaAsientos::setLongitud(int longitud) {
    PilaAsientos::longitud = longitud;
}

int PilaAsientos::getPrecioAsiento() const {
    return precioAsiento;
}

void PilaAsientos::setPrecioAsiento(int precioAsiento) {
    PilaAsientos::precioAsiento = precioAsiento;
}

int PilaAsientos::getPrecioTotal() const {
    return precioTotal;
}

void PilaAsientos::setPrecioTotal(int precioTotal) {
    PilaAsientos::precioTotal = precioTotal;
}

int PilaAsientos::getMaxLongitud() const {
    return maxLongitud;
}

void PilaAsientos::setMaxLongitud(int maxLongitud) {
    PilaAsientos::maxLongitud = maxLongitud;
}

bool PilaAsientos::isFull() const {
    return full;
}

void PilaAsientos::setFull(bool full) {
    this->full = full;
}

void PilaAsientos::pagarAsiento(NodoAsiento *nodo) {
    nodo->setPagado(true);
    this->precioTotal += precioAsiento;
}

void PilaAsientos::reservarAsiento(NodoAsiento *nodo, std::string &ced) {
    nodo->setReservado(true);
    nodo->setCedReservacion(ced);
}

std::string PilaAsientos::pushCompra() {
    if (longitud <= 0) {
        NodoAsiento *comprado = new NodoAsiento();
        pagarAsiento(comprado);
        this->setCabeza(comprado);
        this->longitud++;
        return "Su pago se ha realizado correctamente";
    } else if (longitud == maxLongitud) {
        setFull(true);
        return "La hilera esta llena";
    } else if (longitud < maxLongitud) {
        NodoAsiento *comprado = new NodoAsiento();
        pagarAsiento(comprado);
        comprado->setSiguiente(this->getCabeza());
        this->setCabeza(comprado);
        this->longitud++;
        return "Su pago se ha realizado correctamente";
    } else {
        return "No se pudo comprar el boleto";
    }
}

std::string PilaAsientos::pushReservacion(std::string &ced) {
    if (longitud <= 0) {
        NodoAsiento *reservado = new NodoAsiento();
        reservarAsiento(reservado, ced);
        this->setCabeza(reservado);
        this->longitud++;
        return "Su reservacion se ha realizado correctamente";
    } else if (longitud == maxLongitud) {
        setFull(true);
        return "La hilera esta llena";
    } else if (longitud < maxLongitud) {
        NodoAsiento *reservado = new NodoAsiento();
        reservarAsiento(reservado, ced);
        reservado->setSiguiente(this->getCabeza());
        this->setCabeza(reservado);
        this->longitud++;
        return "Su reservacion se ha realizado correctamente";
    } else {
        return "No se pudo reservar el boleto";
    }
}

NodoAsiento *PilaAsientos::buscarAsiento(std::string &ced) {
    if (longitud > 0) {
        NodoAsiento *aux = getCabeza();
        while (aux != nullptr && aux->getCedReservacion() != ced) {
            aux = aux->getSiguiente();
        }
        return aux;
    }
    return nullptr;
}
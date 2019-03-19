//
// Created by sebas on 3/19/2019.
//

#include "ListaAsientos.h"

ListaAsientos::ListaAsientos() {
    this->precioAsiento = 0;
    this->precioTotal = 0;
    this->cabeza = nullptr;
    this->longitud = 0;
}

ListaAsientos::ListaAsientos(int precioAsiento) {
    this->precioAsiento = precioAsiento;
    this->precioTotal = 0;
    this->cabeza = nullptr;
    this->longitud = 0;
}

NodoAsiento *ListaAsientos::getCabeza() const {
    return cabeza;
}

void ListaAsientos::setCabeza(NodoAsiento *cabeza) {
    ListaAsientos::cabeza = cabeza;
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

int ListaAsientos::getLongitud() const {
    return longitud;
}

void ListaAsientos::setLongitud(int longitud) {
    ListaAsientos::longitud = longitud;
}

bool ListaAsientos::esVacia() {
    return this->longitud <= 0;
}

void ListaAsientos::insertarInicio(NodoAsiento *nodo) {
    if(esVacia()){
        setCabeza(nodo);
    }else{
        nodo->setSiguiente(getCabeza());
        setCabeza(nodo);
    }
    this->longitud++;
}

NodoAsiento* ListaAsientos::buscarIndice(int indice) {
    if(!esVacia()){
        NodoAsiento *aux = getCabeza();
        int i = 0;
        while (i != indice && aux != nullptr) {
            aux = aux->getSiguiente();
        }
        return aux;    
    }
    return nullptr;
}

NodoAsiento* ListaAsientos::buscarCedReservacion(std::string cedReservacion) {
    if (!esVacia()) {
        NodoAsiento *aux = getCabeza();
        while (aux != nullptr && aux->getCedReservacion() != cedReservacion) {
            aux = aux->getSiguiente();
        }
        return aux;
    }
    return nullptr;
}
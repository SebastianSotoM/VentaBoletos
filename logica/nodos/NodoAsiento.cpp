//
// Created by sebas on 3/19/2019.
//

#include "NodoAsiento.h"

NodoAsiento *NodoAsiento::getSiguiente() const {
    return siguiente;
}

void NodoAsiento::setSiguiente(NodoAsiento *siguiente) {
    NodoAsiento::siguiente = siguiente;
}

const std::string &NodoAsiento::getCedReservacion() const {
    return cedReservacion;
}

void NodoAsiento::setCedReservacion(const std::string &cedReservacion) {
    NodoAsiento::cedReservacion = cedReservacion;
}

bool NodoAsiento::isReservado() const {
    return reservado;
}

void NodoAsiento::setReservado(bool reservado) {
    NodoAsiento::reservado = reservado;
}

bool NodoAsiento::isPagado() const {
    return pagado;
}

void NodoAsiento::setPagado(bool pagado) {
    NodoAsiento::pagado = pagado;
}

bool NodoAsiento::reservar(std::string &ced) {
    if(!this->reservado){
        this->reservado = true;
        this->cedReservacion = ced;
    }

    
}
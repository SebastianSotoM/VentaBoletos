//
// Created by sebas on 3/17/2019.
//

#include "NodoAsiento.h"

NodoAsiento::NodoAsiento() {
    this->cedulaReservacion = "";
    this->pago = false;
    this->reservado = false;
}

bool NodoAsiento::esPago() {
    return this->pago;
}

bool NodoAsiento::esReservado() {
    return this->reservado;
}

std::string NodoAsiento::getCedulaReservacion() {
    return this->cedulaReservacion;
}

void NodoAsiento::setPago(bool _pago) {
    this->pago = _pago;
}

void NodoAsiento::setReservado(bool _reservado) {
    this->reservado = _reservado;
}

void NodoAsiento::reservar(std::string _ced) {
    this->cedulaReservacion = _ced;
    this->reservado = true;
}
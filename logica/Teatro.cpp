//
// Created by sebas on 3/19/2019.
//

#include <sstream>
#include "Teatro.h"

Teatro::Teatro() {
    this->ingresosTotales = 0;
    this->areaPreferencial = new ListaAsientos(7000);
    this->graderiaGeneral = new ListaAsientos(4000);

    for (int i = 0; i < 10; i++) {
        this->areaPreferencial->insertarInicio(new NodoAsiento());
    }
    for (int i = 0; i < 50; i++) {
        this->graderiaGeneral->insertarInicio(new NodoAsiento());
    }
    this->graderiaPreferencialIzquierda = new ListaPilaAsientos(5500);
    this->graderiaPreferencialDerecha = new ListaPilaAsientos(5500);

    initGraderiaPreferencial(graderiaPreferencialIzquierda);

    initGraderiaPreferencial(graderiaPreferencialDerecha);
}

void Teatro::initGraderiaPreferencial(ListaPilaAsientos *graderia) {
    for (int i = 0; i < 5; i++) {
        graderia->insertarInicio(new NodoPilaAsiento(5500, 5));
    }
}


ListaAsientos *Teatro::getAreaPreferencial() const {
    return areaPreferencial;
}
ListaAsientos *Teatro::getGraderiaGeneral() const {
    return areaPreferencial;
}

ListaPilaAsientos *Teatro::getGraderiaPreferencialIzquierda() const {
    return graderiaPreferencialIzquierda;
}

ListaPilaAsientos *Teatro::getGraderiaPreferencialDerecha() const {
    return graderiaPreferencialDerecha;
}

std::string Teatro::pagarAreaPreferencial(int index) {
    NodoAsiento *aux = this->areaPreferencial->buscarIndice(index - 1);
    if (aux == nullptr) {
        return "Ese numero de asiento no es valido";
    }
    if (aux->isReservado()) {
        return "El asiento ya se encuentra reservado";
    }
    if (!aux->isPagado()) {
        this->areaPreferencial->pagarAsiento(aux);
        return "Su pago se ha realizado correctamente";
    } else {
        return "Este asiento ya fue cancelado";
    }
}
std::string Teatro::pagarGraderiaGeneral(int index) {
    NodoAsiento *aux = this->graderiaGeneral->buscarIndice(index - 1);
    if (aux == nullptr) {
        return "Ese numero de asiento no es valido";
    }
    if (aux->isReservado()) {
        return "El asiento ya se encuentra reservado";
    }
    if (!aux->isPagado()) {
        this->graderiaGeneral->pagarAsiento(aux);
        return "Su pago se ha realizado correctamente";
    } else {
        return "Este asiento ya fue cancelado";
    }
}

std::string Teatro::reservarAreaPreferencia(int index, std::string ced) {
    NodoAsiento *aux = this->areaPreferencial->buscarIndice(index);
    if (aux == nullptr) {
        return "Ese numero de asiento no es valido";
    } else if (!aux->isReservado() && !aux->isPagado()) {
        aux->reservar(ced);
        return "Se reservo correctamente";
    }
    return "El asiento no se pudo reservar";
}
std::string Teatro::reservarGraderiaGeneral(int index, std::string ced) {
    NodoAsiento *aux = this->graderiaGeneral->buscarIndice(index);
    if (aux == nullptr) {
        return "Ese numero de asiento no es valido";
    } else if (!aux->isReservado() && !aux->isPagado()) {
        aux->reservar(ced);
        return "Se reservo correctamente";
    }
    return "El asiento no se pudo reservar";
}


std::string Teatro::pagarAreaPreferencialReservado(std::string ced) {
    NodoAsiento *porPagar = this->areaPreferencial->buscarCedReservacion(ced);
    if (porPagar == nullptr)
        return "Dicha cedula no tiene ningun asiento reservado";
    else if (porPagar->isPagado()) {
        return "Este espacio ya fue cancelado";
    } else if (porPagar->isReservado()) {
        this->areaPreferencial->pagarAsiento(porPagar);
        return "Se ha pagado correctamente el espacio reservado";
    }
    return "El asiento no se pudo cancelar";
}
std::string Teatro::pagarGraderiaGeneralReservado(std::string ced) {
    NodoAsiento *porPagar = this->graderiaGeneral->buscarCedReservacion(ced);
    if (porPagar == nullptr)
        return "Dicha cedula no tiene ningun asiento reservado";
    else if (porPagar->isPagado()) {
        return "Este espacio ya fue cancelado";
    } else if (porPagar->isReservado()) {
        this->graderiaGeneral->pagarAsiento(porPagar);
        return "Se ha pagado correctamente el espacio reservado";
    }
    return "El asiento no se pudo cancelar";
}
int Teatro::getIngresosTotales() {
    calcularIngresosTotales();
    return ingresosTotales;
}

void Teatro::calcularIngresosTotales() {
    this->ingresosTotales += this->areaPreferencial->getPrecioTotal();
    this->ingresosTotales += this->graderiaPreferencialIzquierda->getPrecioTotal();
    this->ingresosTotales += this->graderiaPreferencialDerecha->getPrecioTotal();
    this->ingresosTotales += this->graderiaGeneral->getPrecioTotal();
}

std::string Teatro::pagarGraderia(ListaPilaAsientos *graderia) {
    return graderia->pagarAsiento();
}

std::string Teatro::pagarGraderiaDerecha() {
    return pagarGraderia(this->graderiaPreferencialDerecha);
}

std::string Teatro::pagarGraderiaIzquierda() {
    return pagarGraderia(this->graderiaPreferencialIzquierda);
}
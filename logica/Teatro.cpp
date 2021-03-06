//
// Created by sebas on 3/19/2019.
//

#include <sstream>
#include "Teatro.h"

Teatro::Teatro() {
    this->ingresosTotales = 0;
    this->areaPreferencial = new ListaAsientos(7000);

    for (int i = 0; i < 10; i++) {
        this->areaPreferencial->insertarInicio(new NodoAsiento());
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

ListaPilaAsientos *Teatro::getGraderiaPreferencialIzquierda() const {
    return graderiaPreferencialIzquierda;
}

ListaPilaAsientos *Teatro::getGraderiaPreferencialDerecha() const {
    return graderiaPreferencialDerecha;
}

int Teatro::getIngresosTotales() {
    calcularIngresosTotales();
    return ingresosTotales;
}

void Teatro::calcularIngresosTotales() {
    this->ingresosTotales = 0;
    this->ingresosTotales += this->areaPreferencial->getPrecioTotal();
    this->ingresosTotales += this->graderiaPreferencialIzquierda->getPrecioTotal();
    this->ingresosTotales += this->graderiaPreferencialDerecha->getPrecioTotal();
}

//Area preferencial

//Pagar
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
//Reservar
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
//PagarReservado
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

//Graderia

//Pagar
std::string Teatro::pagarGraderiaPreferencial(ListaPilaAsientos *graderia) {
    return graderia->pagarAsiento();
}
std::string Teatro::pagarGraderiaDerecha() {
    return pagarGraderiaPreferencial(this->graderiaPreferencialDerecha);
}
std::string Teatro::pagarGraderiaIzquierda() {
    return pagarGraderiaPreferencial(this->graderiaPreferencialIzquierda);
}
//Reservar
std::string Teatro::reservarGraderiaPreferencial(ListaPilaAsientos *graderia, std::string &ced) {
    return graderia->reservarAsiento(ced);
}
std::string Teatro::reservarGraderiaPreferencialIzquierda(std::string &ced){
    return reservarGraderiaPreferencial(this->graderiaPreferencialIzquierda, ced);
}
std::string Teatro::reservarGraderiaPreferencialDerecha(std::string &ced){
    return reservarGraderiaPreferencial(this->graderiaPreferencialDerecha, ced);
}

//PagarReservado
std::string Teatro::pagarGraderiaPreferencialReservado(ListaPilaAsientos *graderia, std::string &ced) {
    return graderia->pagarAsientoReservado(ced);
}

std::string Teatro::pagarGraderiaPreferencialReservadoDerecha(std::string &ced) {
    return pagarGraderiaPreferencialReservado(this->graderiaPreferencialDerecha,ced);
}
std::string Teatro::pagarGraderiaPreferencialReservadoIzquierda(std::string &ced){
    return pagarGraderiaPreferencialReservado(this->graderiaPreferencialIzquierda,ced);
}

//
// Created by sebas on 3/19/2019.
//

#include <sstream>
#include "Teatro.h"

Teatro::Teatro() {
    this->areaPreferencial = new ListaAsientos(7000);

    for (int i = 0; i < 10; i++) {
        this->areaPreferencial->insertarInicio(new NodoAsiento());
    }
}

ListaAsientos *Teatro::getAreaPreferencial() const {
    return areaPreferencial;
}

std::string  Teatro::pagarAreaPreferencial(int index) {
    NodoAsiento * aux = this->areaPreferencial->buscarIndice(index);
    if(aux == nullptr){
        return "Ese numero de asiento no es valido";
    }
    if(aux->isReservado() ){
       return "El asiento ya se encuentra reservado";
    }
    if(!aux->isPagado()){
        this->areaPreferencial->pagarAsiento(aux);
        return "Su pago se ha realizado scorrectamente";
    }
    return "No se pudo efectuar su pago";
}

std::string  Teatro::reservarAreaPreferencia(int index, std::string ced) {
    NodoAsiento * aux = this->areaPreferencial->buscarIndice(index);
    if(aux == nullptr){
        return "Ese numero de asiento no es valido";
    }
    else if(!aux->isReservado() && !aux->isPagado()){
        aux->reservar(ced);
        return "Se reservo correctamente";
    }
    return "El asiento no se pudo reservar";
}

std::string  Teatro::pagarAreaPreferencialReservado(std::string ced) {
    NodoAsiento *porPagar = this->areaPreferencial->buscarCedReservacion(ced);
    if(porPagar == nullptr )
        return "Dicha cedula no tiene ningun asiento reservado";
    else if(porPagar->isPagado()){
        return "Este espacio ya fue cancelado";
    }
    else if(porPagar->isReservado()){
        this->areaPreferencial->pagarAsiento(porPagar);
        return "Se ha pagado correctamente el espacio reservado";
    }
    return "El asiento no se pudo cancelar";
}

int Teatro::getIngresosTotales() const {
    return ingresosTotales;
}

void Teatro::calcularIngresosTotales() {
    this->ingresosTotales = this->areaPreferencial->getPrecioTotal();
}

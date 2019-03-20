//
// Created by sebas on 3/19/2019.
//

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

bool Teatro::pagarAreaPreferencial(int index) {
    NodoAsiento * aux = this->areaPreferencial->buscarIndice(index);
    if(aux != nullptr && !aux->isReservado() && !aux->isPagado()){
        aux->setPagado(true);

        return true;
    }
    return false;
}

bool Teatro::reservarAreaPreferencia(int index, std::string ced) {

}

bool Teatro::pagarAreaPreferencialReservado(std::string ced) {

}
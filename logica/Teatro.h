//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_TEATRO_H
#define VENTABOLETOS_TEATRO_H


#include "estructuras/ListaAsientos.h"

class Teatro {
private:
    ListaAsientos *areaPreferencial;
public:
    Teatro();

    ListaAsientos *getAreaPreferencial() const;

    reservarAreaPreferencia(int index, std::string ced);
    pagarAreaPreferencialReservado(std::string ced);
    pagarAreaPreferencial(int index);
};


#endif //VENTABOLETOS_TEATRO_H

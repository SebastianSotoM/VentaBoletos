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

    bool reservarAreaPreferencia(int index, std::string ced);

    bool pagarAreaPreferencialReservado(std::string ced);

    bool pagarAreaPreferencial(int index);
};


#endif //VENTABOLETOS_TEATRO_H

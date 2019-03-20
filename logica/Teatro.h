//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_TEATRO_H
#define VENTABOLETOS_TEATRO_H


#include "estructuras/ListaAsientos.h"

class Teatro {
private:
    int ingresosTotales;
    ListaAsientos *areaPreferencial;
public:
    Teatro();

    ListaAsientos *getAreaPreferencial() const;

    int getIngresosTotales() const;

    void calcularIngresosTotales();

    std::string reservarAreaPreferencia(int index, std::string ced);

    std::string  pagarAreaPreferencialReservado(std::string ced);

    std::string  pagarAreaPreferencial(int index);
};


#endif //VENTABOLETOS_TEATRO_H

//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_TEATRO_H
#define VENTABOLETOS_TEATRO_H


#include "estructuras/ListaAsientos.h"
#include "estructuras/ListaPilaAsientos.h"

class Teatro {
private:
    int ingresosTotales;
    ListaAsientos *areaPreferencial;
    ListaPilaAsientos *graderiaPreferencialIzquierda;
    ListaPilaAsientos *graderiaPreferencialDerecha;

    void calcularIngresosTotales();

public:


    
    Teatro();

    void initGraderiaPreferencial(ListaPilaAsientos *graderia);

    ListaAsientos *getAreaPreferencial() const;

    ListaPilaAsientos *getGraderiaPreferencialIzquierda() const;

    ListaPilaAsientos *getGraderiaPreferencialDerecha() const;

    int getIngresosTotales();

    std::string reservarAreaPreferencia(int index, std::string ced);

    std::string  pagarAreaPreferencialReservado(std::string ced);

    std::string  pagarAreaPreferencial(int index);

    std::string pagarGraderia(ListaPilaAsientos *graderia);

    std::string pagarGraderiaIzquierda();

    std::string pagarGraderiaDerecha();

};


#endif //VENTABOLETOS_TEATRO_H

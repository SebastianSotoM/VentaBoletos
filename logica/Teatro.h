//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_TEATRO_H
#define VENTABOLETOS_TEATRO_H


#include "estructuras/ListaAsientos.h"
#include "estructuras/ListaPilaAsientos.h"
#include "estructuras/ColaStrings.h"

class Teatro {
private:
    int ingresosTotales;
    ListaAsientos *areaPreferencial;
    ListaPilaAsientos *graderiaPreferencialIzquierda;
    ListaPilaAsientos *graderiaPreferencialDerecha;
    ColaStrings * colaEspera;
    ListaAsientos * graderiaGeneral;
    void calcularIngresosTotales();
    std::string pagarGraderiaPreferencial(ListaPilaAsientos *graderia);
    std::string reservarGraderiaPreferencial(ListaPilaAsientos *graderia, std::string &ced);
    std::string  pagarGraderiaPreferencialReservado(ListaPilaAsientos *graderia ,std::string &ced);

public:
    Teatro();

    void initGraderiaPreferencial(ListaPilaAsientos *graderia);

    ListaAsientos *getAreaPreferencial() const;

    ListaAsientos *getGraderiaGeneral() const;


    ListaPilaAsientos *getGraderiaPreferencialIzquierda() const;

    ListaPilaAsientos *getGraderiaPreferencialDerecha() const;

    int getIngresosTotales();

//    Area preferencial

//    Pagar
    std::string reservarGraderiaGeneral(int index, std::string ced);

    std::string  pagarGraderiaGeneralReservado(std::string ced);

    std::string  pagarAreaPreferencial(int index);
//    Reservar
    std::string reservarAreaPreferencia(int index, std::string ced);
//    Pagar reservado
    std::string  pagarAreaPreferencialReservado(std::string ced);

//    Graderia preferencial

    std::string  pagarGraderiaGeneral(int index);
    std::string pagarGraderia(ListaPilaAsientos *graderia);

//    Pagar
    std::string pagarGraderiaIzquierda();
    std::string pagarGraderiaDerecha();

//    Reservar
    std::string reservarGraderiaPreferencialIzquierda(std::string &ced);
    std::string reservarGraderiaPreferencialDerecha(std::string &ced);

//    PagarReservado
    std::string  pagarGraderiaPreferencialReservadoIzquierda(std::string &ced);
    std::string  pagarGraderiaPreferencialReservadoDerecha(std::string &ced);

};


#endif //VENTABOLETOS_TEATRO_H

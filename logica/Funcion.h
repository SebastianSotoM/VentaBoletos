//
// Created by sebas on 3/18/2019.
//

#ifndef VENTABOLETOS_FUNCION_H
#define VENTABOLETOS_FUNCION_H

#include <ctime>

#include "estructuras/ListaAsientos.h"

class Funcion {
private:
    tm *time;
    ListaAsientos * areaPreferencial;
    void initAreaPreferencial();
public:
    Funcion();
    Funcion(int,int,int);
    tm *getTime() const;
    void setTime(int,int,int);
    ListaAsientos *getAreaPreferencial() const;
    void setAreaPreferencial(ListaAsientos *);

    bool reservarAreaPreferencial(int index, std::string ced);

    void pagarReservacion(std::string ced);
};


#endif //VENTABOLETOS_FUNCION_H

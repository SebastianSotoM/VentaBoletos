//
// Created by sebas on 3/18/2019.
//

#include "Funcion.h"

Funcion::Funcion() {
    this->time = nullptr;
    initAreaPreferencial();
}

Funcion::Funcion(int year, int month, int day) {
    setTime(year,month,day);
    initAreaPreferencial();
}

tm *Funcion::getTime() const {
    return time;
}

void Funcion::setTime(int year, int month, int day) {
    time_t rawtime;
    tm *timeinfo = localtime(&rawtime);
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    mktime(timeinfo);
    this->time = timeinfo;
}

ListaAsientos *Funcion::getAreaPreferencial() const {
    return areaPreferencial;
}

void Funcion::setAreaPreferencial(ListaAsientos *_areaPreferencial) {
    this->areaPreferencial = _areaPreferencial;
}

void Funcion::initAreaPreferencial() {
    this->areaPreferencial = new ListaAsientos();
    for (int i = 0; i < 10; i++) {
        Nodo * nuevo = new NodoAsiento();
        this->areaPreferencial->insertarInicio(nuevo);
    }
}

bool Funcion::reservarAreaPreferencial(int index, std::string ced) {
    if(!this->areaPreferencial->esVacia()){
        NodoAsiento *reservando = this->areaPreferencial->buscarIndice(index);
        if(reservando != nullptr && !reservando->esReservado()){
            reservando->reservar(ced);
            return true;
        }
    }
    return false;
}
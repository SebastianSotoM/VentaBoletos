//
// Created by sebas on 3/20/2019.
//

#ifndef VENTABOLETOS_NODOPILA_H
#define VENTABOLETOS_NODOPILA_H


#include "../estructuras/PilaAsientos.h"

class NodoPilaAsiento {
private:
    NodoPilaAsiento *siguiente;
    PilaAsientos *pila;
public:
    NodoPilaAsiento();

    NodoPilaAsiento(int precioAsiento, int maxLongitudPila);

    NodoPilaAsiento *getSiguiente() const;

    void setSiguiente(NodoPilaAsiento *siguiente);

    PilaAsientos *getPila() const;

    void setPila(PilaAsientos *pila);
};


#endif //VENTABOLETOS_NODOPILA_H

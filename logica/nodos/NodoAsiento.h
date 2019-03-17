//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_NODOASIENTO_H
#define VENTABOLETOS_NODOASIENTO_H

#include <string>
#include "Nodo.h"

class NodoAsiento : public Nodo{
private:
    std::string cedulaReservacion;
    bool reservado;
    bool pago;
public:
    NodoAsiento();
    bool esPago();
    bool esReservado();
    std::string getCedulaReservacion();

    void setPago(bool);
    void setReservado(bool);
    void setCedulaReservacion(std::string);
};


#endif //VENTABOLETOS_NODOASIENTO_H

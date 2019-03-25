//
// Created by sebas on 3/20/2019.
//

#ifndef VENTABOLETOS_PILAASIENTOS_H
#define VENTABOLETOS_PILAASIENTOS_H


#include "../nodos/NodoAsiento.h"

class PilaAsientos {
private:
    NodoAsiento *cabeza;
    int precioAsiento;
    int precioTotal;
    int longitud;
    int maxLongitud;
    bool full;
public:
    PilaAsientos();

    PilaAsientos(int precioAsiento,int maxLongitud);

    NodoAsiento *getCabeza() const;

    void setCabeza(NodoAsiento *cabeza);

    int getPrecioAsiento() const;

    void setPrecioAsiento(int precioAsiento);

    int getPrecioTotal() const;

    void setPrecioTotal(int precioTotal);

    int getLongitud() const;

    void setLongitud(int longitud);

    int getMaxLongitud() const;

    void setMaxLongitud(int maxLongitud);

    bool isFull() const;

    void setFull(bool full);

    std::string pushCompra();

    void pagarAsiento(NodoAsiento *nodo);

    void reservarAsiento(NodoAsiento *nodo,std::string &ced);

    std::string pushReservacion(std::string &ced);

    NodoAsiento * buscarAsiento(std::string &ced);
};


#endif //VENTABOLETOS_PILAASIENTOS_H

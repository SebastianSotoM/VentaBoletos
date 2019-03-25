//
// Created by sebas on 3/20/2019.
//

#ifndef VENTABOLETOS_LISTAPILAASIENTOS_H
#define VENTABOLETOS_LISTAPILAASIENTOS_H


#include "../nodos/NodoPilaAsiento.h"

class ListaPilaAsientos {
private:
    NodoPilaAsiento * cabeza;
    int precioAsiento;
    int precioTotal;
    int longitud;
public:
    ListaPilaAsientos();

    ListaPilaAsientos(int precioAsiento);

    NodoPilaAsiento *getCabeza() const;

    void setCabeza(NodoPilaAsiento *cabeza);

    int getPrecioAsiento() const;

    void setPrecioAsiento(int precioAsiento);

    int getPrecioTotal();

    void setPrecioTotal(int precioTotal);

    int getLongitud() const;

    void setLongitud(int longitud);

    bool esVacia();

    void insertarInicio(NodoPilaAsiento * nodo);

    std::string pagarAsiento();

    std::string reservarAsiento(std::string &ced);

    NodoAsiento * buscarAsiento(std::string &ced);

    void calcularPrecioTotal();
};


#endif //VENTABOLETOS_LISTAPILAASIENTOS_H

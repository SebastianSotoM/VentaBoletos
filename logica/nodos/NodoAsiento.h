//
// Created by sebas on 3/19/2019.
//

#ifndef VENTABOLETOS_NODOASIENTO_H
#define VENTABOLETOS_NODOASIENTO_H


#include <string>

class NodoAsiento {
private:
    NodoAsiento *siguiente;
    std::string cedReservacion;
    bool reservado;
    bool pagado;
public:
    NodoAsiento *getSiguiente() const;

    void setSiguiente(NodoAsiento *siguiente);

    const std::string &getCedReservacion() const;

    void setCedReservacion(const std::string &cedReservacion);

    bool isReservado() const;

    void setReservado(bool reservado);

    bool isPagado() const;

    void setPagado(bool pagado);

    bool reservar(std::string &ced);
};


#endif //VENTABOLETOS_NODOASIENTO_H

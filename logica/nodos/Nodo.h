//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_NODO_H
#define VENTABOLETOS_NODO_H


class Nodo {
protected:
    Nodo *siguiente;
public:
    Nodo();
    Nodo *getSiguiente();
    void setSiguiente(Nodo *);
};


#endif //VENTABOLETOS_NODO_H

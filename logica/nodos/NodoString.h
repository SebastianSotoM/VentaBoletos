//
// Created by sebas on 3/30/2019.
//

#ifndef VENTABOLETOS_NODOSTRING_H
#define VENTABOLETOS_NODOSTRING_H

#include <string>

class NodoString {
private:
    NodoString *siguiente;
    NodoString *anterior;
    std::string value;
public:
    NodoString();

    NodoString(const std::string &value);

    NodoString *getSiguiente() const;

    void setSiguiente(NodoString *siguiente);

    NodoString *getAnterior() const;

    void setAnterior(NodoString *anterior);

    const std::string &getValue() const;

    void setValue(const std::string &value);
};


#endif //VENTABOLETOS_NODOSTRINGS_H

//
// Created by sebas on 3/30/2019.
//

#ifndef VENTABOLETOS_COLASTRINGS_H
#define VENTABOLETOS_COLASTRINGS_H


#include "../nodos/NodoString.h"

class ColaStrings {
private:
    NodoString *inicio;
    NodoString *final;
    int longitud;
public:
    ColaStrings();

    NodoString *getInicio() const;

    void setInicio(NodoString *inicio);

    NodoString *getFinal() const;

    void setFinal(NodoString *final);

    int getLongitud() const;

    void setLongitud(int longitud);

    bool esVacia();
    void insertar(std::string value);
    std::string atender();
    bool eliminar(std::string value);


};


#endif //VENTABOLETOS_COLASTRINGS_H

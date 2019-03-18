//
// Created by sebas on 3/17/2019.
//

#ifndef VENTABOLETOS_NODO_H
#define VENTABOLETOS_NODO_H

#include <string>
#include <sstream>

class Nodo {
protected:
    Nodo *siguiente;
public:
    Nodo();
    Nodo *getSiguiente();
    void setSiguiente(Nodo *);
    virtual std::string getClassName(){
        return "Nodo";
    }
    virtual std::string toString(){
        std::stringstream info;
        info << "\nNodo:\nSiguiente:\t"<< ((siguiente == nullptr)?"null":siguiente->toString()) <<"\n";

        return info.str();
    }
};


#endif //VENTABOLETOS_NODO_H

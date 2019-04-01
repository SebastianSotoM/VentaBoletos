//
// Created by sebas on 3/30/2019.
//

#include "ColaStrings.h"

ColaStrings::ColaStrings() {
    this->inicio = nullptr;
    this->final = nullptr;
    this->longitud = 0;
}

NodoString *ColaStrings::getInicio() const {
    return inicio;
}

void ColaStrings::setInicio(NodoString *inicio) {
    ColaStrings::inicio = inicio;
}

NodoString *ColaStrings::getFinal() const {
    return final;
}

void ColaStrings::setFinal(NodoString *final) {
    ColaStrings::final = final;
}

int ColaStrings::getLongitud() const {
    return longitud;
}

void ColaStrings::setLongitud(int longitud) {
    ColaStrings::longitud = longitud;
}

bool ColaStrings::esVacia() {
    return longitud <= 0;
}

void ColaStrings::insertar(std::string value) {
    NodoString *nuevo = new NodoString(value);
    if (esVacia()) {
        setInicio(nuevo);
        setFinal(nuevo);
        this->longitud++;
    } else {
        getFinal()->setSiguiente(nuevo);
        nuevo->setAnterior(getFinal());
        setFinal(nuevo);
        this->longitud++;
    }
}

std::string ColaStrings::atender() {
    std::string res = "";
    if(!esVacia()){
        res = getInicio()->getValue();
        setInicio(getInicio()->getSiguiente());
        longitud--;
    }
    return res;
}

bool ColaStrings::eliminar(std::string value) {
    bool res = false;
    if(!esVacia()){
        if(getInicio()->getValue() == value){
            setInicio(getInicio()->getSiguiente());
            res = true;
            longitud--;
        }
        if(getFinal()->getValue() == value){
            getFinal()->getAnterior()->setSiguiente(nullptr);
            setFinal(getFinal()->getAnterior());
            res = true;
            longitud--;
        }else{
            NodoString *aux = getInicio();

            while(aux != nullptr && aux->getValue() != value){
                aux = aux->getSiguiente();
            }
            if(aux != nullptr){
                aux->getAnterior()->setSiguiente(aux->getSiguiente());
                res = true;
                longitud--;
            }
        }
    }
    return res;
}
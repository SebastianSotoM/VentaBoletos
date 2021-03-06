//
// Created by sebas on 3/20/2019.
//

#include "ListaPilaAsientos.h"

ListaPilaAsientos::ListaPilaAsientos() {
    this->cabeza = nullptr;
    this->longitud = 0;
    this->precioAsiento = 0;
    this->precioTotal = 0;
}

ListaPilaAsientos::ListaPilaAsientos(int precioAsiento) {
    this->cabeza = nullptr;
    this->longitud = 0;
    this->precioAsiento = precioAsiento;
    this->precioTotal = 0;
}

NodoPilaAsiento *ListaPilaAsientos::getCabeza() const {
    return cabeza;
}

void ListaPilaAsientos::setCabeza(NodoPilaAsiento *cabeza) {
    ListaPilaAsientos::cabeza = cabeza;
}

int ListaPilaAsientos::getPrecioAsiento() const {
    return precioAsiento;
}

void ListaPilaAsientos::setPrecioAsiento(int precioAsiento) {
    ListaPilaAsientos::precioAsiento = precioAsiento;
}

int ListaPilaAsientos::getPrecioTotal() {
    calcularPrecioTotal();
    return precioTotal;
}

void ListaPilaAsientos::setPrecioTotal(int precioTotal) {
    ListaPilaAsientos::precioTotal = precioTotal;
}

int ListaPilaAsientos::getLongitud() const {
    return longitud;
}

void ListaPilaAsientos::setLongitud(int longitud) {
    ListaPilaAsientos::longitud = longitud;
}

bool ListaPilaAsientos::esVacia() {
    return this->longitud <= 0;
}

void ListaPilaAsientos::insertarInicio(NodoPilaAsiento *nodo) {
    if(esVacia()){
        setCabeza(nodo);
    }else{
        nodo->setSiguiente(getCabeza());
        setCabeza(nodo);
    }
    this->longitud++;
}

std::string ListaPilaAsientos::pagarAsiento() {
    if(!esVacia()){
        NodoPilaAsiento * aux = getCabeza();
        while (aux != nullptr && aux->getPila()->isFull()) {
            aux = aux->getSiguiente();
        }
        if(aux != nullptr){
            std::string res = aux->getPila()->pushCompra();
            if (res == "La hilera esta llena") {
                aux = aux->getSiguiente();
                if (aux != nullptr) {
                    res = aux->getPila()->pushCompra();
                } else {
                    res = "Ya no hay espacios";
                }
            }
            return res;
        }
    }
    return "No se pudo comprar ningun espacio";
}

std::string ListaPilaAsientos::reservarAsiento(std::string &ced){
    if(!esVacia()){
        NodoPilaAsiento * aux = getCabeza();
        while (aux != nullptr && aux->getPila()->isFull()) {
            aux = aux->getSiguiente();
        }
        if(aux != nullptr){
            std::string res = aux->getPila()->pushReservacion(ced);
            if (res == "La hilera esta llena") {
                aux = aux->getSiguiente();
                if (aux != nullptr) {
                    res = aux->getPila()->pushReservacion(ced);
                } else {
                    res = "Ya no hay espacios";
                }
            }
            return res;
        }
    }
    return "No se pudo reservar ningun espacio";

}

std::tuple<NodoAsiento *,PilaAsientos *> ListaPilaAsientos::buscarAsiento(std::string &ced){
    if(!esVacia()){
        NodoPilaAsiento *aux = getCabeza();
        NodoAsiento *busqueda = nullptr;
        while(aux != nullptr && busqueda == nullptr){
            busqueda = aux->getPila()->buscarAsiento(ced);
            aux = aux->getSiguiente();
        }
        if(busqueda != nullptr && aux != nullptr){
            std::tuple<NodoAsiento *,PilaAsientos *> result(busqueda,aux->getPila());
            return result;
        }
    }
    std::tuple<NodoAsiento *,PilaAsientos *> def(nullptr, nullptr);
    return def;
}

void ListaPilaAsientos::calcularPrecioTotal() {
    if(!esVacia()){
        NodoPilaAsiento *aux = getCabeza();
        while(aux != nullptr){
            this->precioTotal += aux->getPila()->getPrecioTotal();
            aux = aux->getSiguiente();
        }
    }
}

std::string ListaPilaAsientos::pagarAsientoReservado(std::string &ced) {
    std::tuple<NodoAsiento *,PilaAsientos *> result = buscarAsiento(ced);
    NodoAsiento * asientoReservado = std::get<0> (result);
    PilaAsientos * filaAsientos = std::get<1> (result);
    if(asientoReservado != nullptr && filaAsientos != nullptr){
        if(asientoReservado->isPagado()){
            return "Este espacio ya fue pagado.";
        }else{
            asientoReservado->setPagado(true);
            filaAsientos->setPrecioTotal(filaAsientos->getPrecioTotal() + filaAsientos->getPrecioAsiento());
            return "Se realizo el pago del asiento reservado";
        }
    }
    return "No hay asientos reservados con esa cedula";
}
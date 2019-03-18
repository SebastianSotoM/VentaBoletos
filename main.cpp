#include <iostream>
#include "logica/estructuras/ListaAsientos.h"
#include "logica/nodos/NodoAsiento.h"

int main() {
    ListaAsientos * la = new ListaAsientos();
    NodoAsiento * a1 = new NodoAsiento();
    NodoAsiento * a2 = new NodoAsiento();
    NodoAsiento * a3 = new NodoAsiento();
    NodoAsiento * a4 = new NodoAsiento();

    a1->setCedulaReservacion("1");
    a2->setCedulaReservacion("2");
    a3->setCedulaReservacion("3");
    a4->setCedulaReservacion("4");
    la->insertarInicio(a1);
    la->insertarInicio(a2);
    la->insertarInicio(a3);
    la->insertarInicio(a4);

    la->esVacia();
    return 0;
}
#include <iostream>
#include "logica/estructuras/ListaAsientos.h"

int main() {
    ListaAsientos * la = new ListaAsientos();
    NodoAsiento * a1 = new NodoAsiento();
    a1->setPago(true);
    std::cout<<la->insertarInicio(a1)<<std::endl;
    return 0;
}
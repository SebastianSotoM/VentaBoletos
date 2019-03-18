#include <iostream>
#include "logica/Funcion.h"
using namespace std;

int main() {
    Funcion * coco = new Funcion(2020,1,5);
    coco->reservarAreaPreferencial(0,"305270799");
    NodoAsiento *aSebas = coco->getAreaPreferencial()->buscarCedulaReservacion("305270799");
    cout<<aSebas->esReservado();
    cout<<coco->reservarAreaPreferencial(0,"123");

    NodoAsiento *n = coco->getAreaPreferencial()->buscarCedulaReservacion("123");

    return 0;
}
#include <iostream>
#include "logica/Teatro.h"
using namespace std;

int main() {
    Teatro *coco = new Teatro();
    ListaAsientos *apCoco = coco->getAreaPreferencial();
    coco->pagarAreaPreferencial(1);

    cout<<apCoco->buscarIndice(1)->isPagado();

    return 0;
}
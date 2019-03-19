#include <iostream>
#include "logica/Teatro.h"
using namespace std;

int main() {
    Teatro *coco = new Teatro();
    ListaAsientos *apCoco = coco->getAreaPreferencial();
    apCoco->esVacia();

    return 0;
}
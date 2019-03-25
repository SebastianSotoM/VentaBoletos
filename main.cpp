#include <iostream>
#include "logica/Teatro.h"

using namespace std;

void llenarGraderiaPreferencial(ListaPilaAsientos *t) {
    for (int i = 0; i < 27; i++) {
        t->pagarAsiento();
    }
    cout << endl;
}

int main() {
    Teatro *coco = new Teatro();

    llenarGraderiaPreferencial(coco->getGraderiaPreferencialIzquierda());
    llenarGraderiaPreferencial(coco->getGraderiaPreferencialDerecha());
    cout << coco->pagarAreaPreferencial(1) << endl;

    cout << coco->pagarGraderiaGeneral(9) << endl;


    cout << coco->getIngresosTotales();

    return 0;
}
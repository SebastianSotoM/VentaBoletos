#include <iostream>
#include "logica/Teatro.h"
#include "logica/estructuras/ColaStrings.h"

using namespace std;

void llenarGraderiaPreferencial(ListaPilaAsientos *t) {
    for (int i = 0; i < 27; i++) {
        cout<<t->pagarAsiento()<<endl;
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
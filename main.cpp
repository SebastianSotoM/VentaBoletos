#include <iostream>
#include "logica/Teatro.h"

using namespace std;

void llenarGraderiaPreferencial(ListaPilaAsientos *t) {
    for (int i = 0; i < 27; i++) {
        cout<<t->pagarAsiento()<<endl;
    }
    cout << endl;
}

int main() {
    Teatro *coco = new Teatro();
    std::string ced1 = "305270799";
    std::string ced2 = "11";
    std::string ced3 = "22";
    std::string ced4 = "33";
    std::string ced5 = "44";
    std::string ced6 = "55";
    coco->reservarGraderiaPreferencialDerecha(ced1);
    coco->reservarGraderiaPreferencialDerecha(ced2);
    coco->reservarGraderiaPreferencialDerecha(ced3);
    coco->reservarGraderiaPreferencialDerecha(ced4);
    coco->reservarGraderiaPreferencialDerecha(ced5);
    coco->reservarGraderiaPreferencialDerecha(ced6);
    cout << coco->getIngresosTotales();

    return 0;
}
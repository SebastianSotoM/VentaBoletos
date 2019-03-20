#include <iostream>
#include "logica/Teatro.h"
using namespace std;

int main() {
    Teatro *coco = new Teatro();

    cout<<coco->reservarAreaPreferencia(1,"123")<<endl;
    cout<<coco->pagarAreaPreferencial(1)<<endl;
    cout<<coco->pagarAreaPreferencialReservado("123")<<endl;
    cout<<coco->pagarAreaPreferencialReservado("12")<<endl;
    cout<<coco->pagarAreaPreferencial(2)<<endl;

    coco->calcularIngresosTotales();

    cout<<coco->getIngresosTotales();

    return 0;
}
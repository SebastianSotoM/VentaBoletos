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

    return 0;
}
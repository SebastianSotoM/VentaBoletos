//
// Created by sebas on 3/18/2019.
//

#ifndef VENTABOLETOS_FUNCION_H
#define VENTABOLETOS_FUNCION_H


#include <ctime>

class Funcion {
private:
    tm *time;


public:
    tm *getTime() const;
    void setTime(int,int,int);
};


#endif //VENTABOLETOS_FUNCION_H

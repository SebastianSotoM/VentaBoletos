//
// Created by sebas on 3/18/2019.
//

#include "Funcion.h"

tm *Funcion::getTime() const {
    return time;
}

void Funcion::setTime(int year, int month, int day) {
    time_t rawtime;
    tm *timeinfo = localtime(&rawtime);
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    mktime(timeinfo);
    this.time = timeinfo
}

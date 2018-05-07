//
// Created by Lukas on 01.05.2018.
//
#include "Datum.h"
#ifndef UNTITLED_DIENST_H
#define UNTITLED_DIENST_H


class Dienst {
private:
    Datum *d;
    int Akulit=0;
    int Sammler=0;
    int Zeremonial=0;
public:
    Dienst(Datum d);
    Datum *getdatum();
};


#endif //UNTITLED_DIENST_H

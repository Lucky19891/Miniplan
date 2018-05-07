//
// Created by Lukas on 01.05.2018.
//
#include "Datum.h"
#include "Dienst.h"

Dienst::Dienst(Datum d1) {
 this->d=new Datum(d1.getTag(),d1.getMonat(),d1.getJahr());
}

Datum *Dienst::getdatum() {
    return (this->d);
}
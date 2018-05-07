//
// Created by Lukas on 01.05.2018.
//
#include "Datum.h"
#include "Dienst.h"

Dienst::Dienst(Datum d1) {
    Datum d2;
    d2=d1;
    int x=0;
    switch (d1.getwtag()){
        case 0:x=3;
            break;
        case 1:x=2;
            break;
        case 2:x=1;
            break;
        case 3:x=3;
            break;
        case 4:x=2;
            break;
        case 5:x=1;
            break;
        case 6:x=1;
            break;

    }
    d2.addw(x);
 this->d=new Datum(d2.getTag(),d2.getMonat(),d2.getJahr());
 if(d2.getwtag()==3){
     this->Akulit=2;
     this->Sammler=0;
     this->Zeremonial=0;
     }
     else{
     this->Akulit=2;
     this->Sammler=2;
     this->Zeremonial=1;
 }
}

Datum *Dienst::getdatum() {
    return (this->d);
}
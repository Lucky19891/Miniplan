//
// Created by Lukas on 01.05.2018.
//
#include <iostream>
#include <ctime>
#include "Datum.h"
using namespace std;

Datum::Datum(unsigned int T, unsigned int M, unsigned int J) {
    this->Tag=T;
    this->Monat=M;
    this->Jahr=J;
}

void Datum::setakttime() {
            time_t Zeitstempel;
            tm *nun;
            Zeitstempel = time(NULL);
            nun = localtime(&Zeitstempel);
            this->Tag=nun->tm_mday;
            this->Monat=nun->tm_mon+1;
            this->Jahr=nun->tm_year+1900;
        }
int Datum::getwtag(){
    int w=0;
    int m=0;
    int a=0;
    int y=0;
    int c=0;
    int b=0;
    int e=0;
    m=this->Monat;
    m=((m+9)%12)+1;
    a=2.6*m-0.2;
    c=this->Jahr/100;
    e=c/4;
    y=this->Jahr%100;
    b=y/4;
    w=this->Tag+a+y+b+e-(2*c);
    while (w<0) w+=7;
    w=w%7;
    return w;
    }


int Datum::getJahr() {
    return (this->Jahr);
}

int Datum::getMonat() {
    return (this->Monat);
}

int Datum::getTag() {
    return (this->Tag);
}

int Datum::compare(Datum d) {
    if(this->Jahr<d.Jahr)return 1;
    else if(this->Jahr<d.Jahr) return -1;
    else {  if(this->Monat<d.Monat) return 1;
            else if(this->Monat>d.Monat) return -1;
            else{   if(this->Tag<d.Tag) return 1;
                    if(this->Tag>d.Tag) return -1;
                    else return 0;

            }
    }
}

bool Datum::checkdatum() {
    bool i=true;
    switch (this->Monat){
        case 2: if((this->Jahr%4==0&&this->Tag>29))i= false;
                else if(this->Tag>28)i= false;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(this->Tag>31)i= false;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(this->Tag>30)i= false;
            break;
        default:i= false;
        }
if (i==false) cout<<"Ungültiges Datum";
    return i;
}

Datum *Datum::addw(int w) {
    Datum *pe;
    switch (this->Monat){
        case 2: if((this->Jahr%4==0&&(this->Tag+w)>29))pe=new Datum((this->Tag+w)-29,this->Monat+1,this->Jahr);
            else if((this->Tag+w)>28)pe=new Datum((this->Tag+w)-28,this->Monat+1,this->Jahr);
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if((this->Tag+w)>31)pe=new Datum((this->Tag+w)-31,this->Monat+1,this->Jahr);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if((this->Tag+w)>30)pe=new Datum((this->Tag+w)-30,this->Monat+1,this->Jahr);
            break;
        case 12:
            if((this->Tag+w)>31)pe=new Datum((this->Tag+w)-31,this->Monat+1,this->Jahr+1);
            break;
        default:
            pe=new Datum((this->Tag+w),this->Monat,this->Jahr);
            break;
    }
    return pe;
}

void Datum::settag(int i) {
    this->Tag=i;
}

void Datum::setmonat(int i) {
    this->Monat=i;
}

void Datum::setjahr(int i) {
    this->Jahr=i;
}

Datum::Datum() {};
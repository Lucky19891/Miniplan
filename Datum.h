//
// Created by Lukas on 01.05.2018.
//
#include <vector>
#include <string.h>
using namespace std;
#ifndef UNTITLED_DATUM_H
#define UNTITLED_DATUM_H


class Datum {
private:
    vector<string> NameAkulit;
    vector<string> NameSammler;
    vector<string> NameZeremonial;
    unsigned int Tag;
    unsigned int Monat;
    unsigned int Jahr;
public:
    Datum();
    int getwtag();
    void setakttime();
    void settag(int i);
    void setmonat(int i);
    void setjahr(int i);
    Datum(unsigned int T,unsigned int M,unsigned int J);
    int getTag();
    int getMonat();
    int getJahr();
    int compare(Datum d);  //0=gleich 1=datum in klammern größer -1=datum in klammern kleiner
    bool checkdatum();
    Datum *addw(int w);
};


#endif //UNTITLED_DATUM_H

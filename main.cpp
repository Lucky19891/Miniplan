#include <iostream>
#include <time.h>
#include "Datum.h"
#include "Dienst.h"
using namespace std;

int main() {
    int buffer1=0;
    int buffer2=0;
    int buffer3=0;
    Datum *pakt;
    Datum *pstart;
    pakt=new Datum();
    cout<<"Starttag:";
    cin>>buffer1;
    cout<<endl<<"Startmonat:";
    cin>>buffer2;
    cout<<endl<<"Startjahr:";
    cin>>buffer3;
    pstart=new Datum(buffer1,buffer2,buffer3);
    pakt->setakttime();
    if(pakt->compare(*pstart)<0) return 1;

}
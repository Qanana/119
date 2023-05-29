#ifndef _DOGOVOR_H
#define _DOGOVOR_H
#include <iostream>
#include <string>
#include "Client.h"
#include "Servise.h"

using namespace std;
class Dogovor {
private:
    int id;
    string date;
    string conditions;
public:
    Dogovor(int f, string p, string a) {
        id = f;
        date = p;
        conditions = a;
    }

    int getId() {
        return id;
    }

    string getData() {
        return date;
    }

    string getConditions() {
        return conditions;
    }
};

#endif //_DOGOVOR_H
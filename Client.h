
#ifndef _CLIENT_H
#define _CLIENT_H
#include <iostream>
#include <string>
#include "Entry.h"
#include "MedicaCard.h"

using namespace std;
class Client {
private:
    string fio;
    string phone;
    string address;
public:
    Client(string f, string p, string a) {
        fio = f;
        phone = p;
        address = a;
    }

    string getFio() {
        return fio;
    }

    string getPhone() {
        return phone;
    }

    string getAddress() {
        return address;
    }
};

#endif //_CLIENT_H
#ifndef _REGISTRAR_H
#define _REGISTRAR_H
#include <iostream>
#include <string>
#include <winnt.h>
#include "Client.h"
#include "Dogovor.h"
#include "Entry.h"

using namespace std;
class Registrar {
public:
    void bookAppointment(Client &client, Entry &date) {
        // код для записи клиента на прием к врачу и даты
    }
    void makeContract(Client& client, Dogovor &date, Entry &cost) {
        // код для оформления договора с клиентом и оплатой
    }
};

#endif //_REGISTRAR_H
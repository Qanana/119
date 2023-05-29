#ifndef _ACCOUNTANT_H
#define _ACCOUNTANT_H
#include <iostream>
#include <string>
#include "Client.h"
#include "Dogovor.h"
#include "Accountant.h"
#include "Entry.h"
#include "MedicaCard.h"
#include "Servise.h"
#include "Specialist.h"

using namespace std;
class Accountant {
public:
    // Конструктор
    Accountant(string patient_name, string service_name, float amount_due) {
        patient_name_ = patient_name;
        service_name_ = service_name;
        amount_due_ = amount_due;
    }

    // Метод для выписки квитанции на оплату медицинских услуг
    void print_invoice() {
        cout << "==========================" << endl;
        cout << "Квитанция" << endl;
        cout << "==========================" << endl;
        //cout << "Пациент: " << patient_name_ << endl;
        cout << "Услуга: " << service_name_ << endl;
        cout << "Сумма: " << amount_due_ << endl;
        cout << "==========================" << endl;
    }

private:
    string patient_name_;
    string service_name_;
    float amount_due_;
};
#endif //_ACCOUNTANT_H
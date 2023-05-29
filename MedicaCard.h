#ifndef _MEDICACARD_H
#define _MEDICACARD_H
#include <iostream>
#include <string>

using namespace std;
class MedicalCard {
private:
    int id;
    string date;
    string healthData;
public:
    MedicalCard(int id, string date, string healthData) {
        this->id = id;
        this->date = date;
        this->healthData = healthData;
    }

    int getId() {
        return id;
    }

    string getDate() {
        return date;
    }

    string getHealthData() {
        return healthData;
    }
};

#endif //_MEDICACARD_H
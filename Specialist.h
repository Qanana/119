#ifndef _SPECIALIST_H
#define _SPECIALIST_H
#include <iostream>
#include <string>

using namespace std;
class Specialist {
private:
    int id;
    string name;
    string surname;
    string specialization;

public:
    Specialist(int _id, string _name, string _surname, string _specialization) {
        id = _id;
        name = _name;
        surname = _surname;
        specialization = _specialization;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getSurname() {
        return surname;
    }

    string getSpecialization() {
        return specialization;
    }
};

#endif //_SPECIALIST_H
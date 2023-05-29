#ifndef _ENTRY_H
#define _ENTRY_H
#include <iostream>
#include <string>
#include "Specialist.h"
#include "Servise.h"

using namespace std;
class Entry {
public:
    int id;
    string date;
    string time;
    double cost;
    
    Entry(int i, string d, string t, double c) 
        : id(i), date(d), time(t), cost(c) {}
};

#endif //_ENTRY_H
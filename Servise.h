#ifndef _SERVICE_H
#define _SERVICE_H
#include <iostream>
#include <string>

using namespace std;
class Service {
public:
    int id;
    string name;
    double cost;
    Service(int i, string n, double c) {
        id = i;
        name = n;
        cost = c;
    }
    int getID() {return id;}
    string getName() {return name;}
    double getCost() {return cost;}
};

#endif //_SERVICE_H
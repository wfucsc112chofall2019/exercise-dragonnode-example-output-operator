//
// Created by Samuel Cho on 11/13/19.
//

#ifndef DRAGON_H
#define DRAGON_H

#include <iostream>
#include <string>
using namespace std;

class Dragon {
private:
    string name;
public:
    Dragon();
    Dragon(const string& n);

    // copy constructor
    Dragon(const Dragon& d);

    // assignment operator
    Dragon& operator=(const Dragon& d);

    // output operator
    friend ostream& operator<< (ostream& out, const Dragon& d);
};

#endif //DRAGON_H

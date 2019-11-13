//
// Created by Samuel Cho on 11/13/19.
//

#include <iostream>
#include <string>
#include "Dragon.h"
using namespace std;

Dragon::Dragon() {
    name = "";
}

Dragon::Dragon(const string& n) {
    name = n;
}

Dragon::Dragon(const Dragon& d) {
    name = d.name;
}

Dragon& Dragon::operator=(const Dragon& d) {
    name = d.name;
    return *this;
}

ostream& operator<< (ostream& out, const Dragon& d) {
    out << d.name;
    return out;
}

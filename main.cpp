/* Program: DragonNodeExample v3.0
* Author: Samuel Cho
* Description: Linked list of DragonNode objects.
*/
#include <iostream>
#include <string>
#include "Dragon.h"
#include "DragonNode.h"

using namespace std;

int main() {
    // allocate memory for Dragon object
    Dragon Dragon1("Drogon");
    Dragon Dragon2("Rhaegal");
    Dragon Dragon3("Viserion");

    DragonNode *dn1 = new DragonNode(Dragon1);
    DragonNode *dn2 = new DragonNode(Dragon2);
    DragonNode *dn3 = new DragonNode(Dragon3);

    dn1->InsertAfter(dn2);
    dn1->InsertAfter(dn3);

    DragonNode *currNode = dn1;
    while (currNode != nullptr) {
        currNode->Attack();
        currNode = currNode->GetNext();
    }
}
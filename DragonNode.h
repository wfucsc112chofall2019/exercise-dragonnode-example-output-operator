//
// Created by Samuel Cho on 11/13/19.
//

#ifndef DRAGONNODE_H
#define DRAGONNODE_H

#include "Dragon.h"

class DragonNode {
private:
    Dragon dgon;
    DragonNode *nextPtr;

public:
    DragonNode();

    DragonNode(Dragon &d, DragonNode *next = nullptr);

    void Attack();

    void InsertAfter(DragonNode *node);

    DragonNode *GetNext();
};

#endif //DRAGONNODE_H

//
// Created by Samuel Cho on 11/13/19.
//

#include <iostream>
#include "DragonNode.h"
using namespace std;

DragonNode::DragonNode() {
    nextPtr = nullptr;
}

DragonNode::DragonNode(Dragon &d, DragonNode *next) {
    dgon = d;
    nextPtr = next;
}

void DragonNode::Attack() {
    cout << dgon << ", Dracarys!" << endl;
}

void DragonNode::InsertAfter(DragonNode *node) {
    DragonNode *tempNode = nullptr;
    tempNode = nextPtr;
    nextPtr = node;
    node->nextPtr = tempNode;
}

DragonNode* DragonNode::GetNext() {
    return nextPtr;
}

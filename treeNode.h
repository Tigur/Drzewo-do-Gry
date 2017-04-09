//
// Created by resolution on 08.04.17.
//

#ifndef TREE_TREENODE_H
#define TREE_TREENODE_H
#include <iostream>
#include "List.h"

using namespace std;

template <class type>
class treeNode
{
public:

    List <Tree> sons;
    treeNode *father;
    type value;
    int num=0;

    treeNode()  {}
    ~treeNode() {}
};


#endif //TREE_TREENODE_H

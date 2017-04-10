//
// Created by resolution on 10.04.17.
//

#ifndef TREE_TREE_H
#define TREE_TREE_H
#include <iostream>
#include "TreeStructure.h"

using namespace std;

template <class type>
class Tree
{
    TreeStructure<type> root;
    int size=0;

public:
    bool create (int parentNum, type value)
    {
        int newid=size;
       if( root.create(parentNum, value, newid))
       {
           size++;

           return true;
       }

        return false;
    }

};
#endif //TREE_TREE_H

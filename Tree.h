//
// Created by resolution on 10.04.17.
//

#ifndef TREE_TREE_H
#define TREE_TREE_H
#include <iostream>
#include "TreeNode.h"

using namespace std;

template <class type>
class Tree
{
    TreeNode<type> root;
    int sizeT=0;

public:
    bool create (int parentNum, type value)
    {
        int newid=sizeT;
       if( root.create(parentNum, value, newid))
       {
           sizeT++;

           return true;
       }

        return false;
    }


    bool remove (int parentId)
    {
        if (root.remove(parentId))
        {
            sizeT --;
            return true;
        }

        return false;
    }

    void show ()
    {
        root.show();
    }




    // funkcje dostępu dev

    TreeNode<type> getRoot()
    {
        return root;
    }
    int getSize()
    {
        return sizeT;
    }

};
#endif //TREE_TREE_H

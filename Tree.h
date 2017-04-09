//
// Created by resolution on 08.04.17.
//

#ifndef TREE_BTREE_H
#define TREE_BTREE_H
#include <iostream>
#include "treeNode.h"

using namespace std;


template <class type>
class Tree
{
    treeNode <type>  root; // zmiana wskaźnika na komórkę
    int size=0;




    bool isLeaf()
    {
       if(root.sons.empty())
        return true;

        else
            return false;
    }

    Tree <type>* preorder (int parentNum,Tree <type> *tree)
    {
        Tree <type> *currentNode;
        int i= 0; tree->root.sons.size;

        if(currentNode->root.num!=parentNum)
            return this;

        if(isLeaf())
            return 0; //NULL

       currentNode= tree->root.sons.pick(i).value; // do pogodzenia +++
        if(preorder(parentNum,currentNode)




    }

    bool create (int parentNum, type value)
    {
        if(size<parentNum)
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }
        if(size == 0)
        {
        root.sons.insert(value, root.sons.size); // tworzymy komórkę listy ze wskaźnikiem
        root.sons.pick(root.sons.size).value= new Tree <type> ;
            size ++ ;

            return true;
        }


    }

    treeNode <type>* find (int parentNum)
    {
        treeNode <type> *tmp=root;

        while(tmp->num!=parentNum)
        {
            tmp->sons.pick
        }
    }
};



#endif //TREE_BTREE_H

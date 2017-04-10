//
// Created by resolution on 08.04.17.
//

#ifndef TREE_BTREE_H
#define TREE_BTREE_H
#include <iostream>
#include "treeNode.h"

using namespace std;


template <class type>
class TreeStructure
{
    //treeNode <type>  root; // zmiana wskaźnika na komórkę

    List <TreeStructure> sons;
    TreeStructure *father;
    type value;
    int id=0;


    int size=0;




    bool isLeaf()
    {
       if(sons.empty())
        return true;

        else
            return false;
    }

    TreeStructure <type>* preorder (int parentNum,TreeStructure <type> *tree)
    {
        TreeStructure <type> *found=0;
        TreeStructure <type> *currentNode=0;
        int i= 0; tree->sons.size;

        if(currentNode->id!=parentNum)
            return this;

        if(isLeaf())
            return 0; //NULL

       currentNode= tree->sons.pick(i).value; // do pogodzenia +++
        if(found=preorder(parentNum,currentNode))
            return 0;



    }

public:

    bool create (int parentId, type value, int newId)
    {

        TreeStructure<type> *newTree;


        if(size == 0||parentId==id)
        {
            sons.insert(new TreeStructure <type>, sons.size); // tworzymy komórkę listy ze wskaźnikiem
            // sons.pick(sons.size).value = new TreeStructure <type> ;

            newTree=sons.pick(sons.size).value;


            newTree->id=newId;
            newTree->father=this;
            size ++ ;


            return true;
        }

        if(size<parentId)
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }

        preorder(parentId,this)->create(parentId,value, newId);


    }

    /*TreeStructure <type>* find (int parentNum)
    {
        TreeStructure <type> *tmp=this;

        while(tmp->id!=parentNum)
        {
            tmp->sons.pick
        }
    }
    */
};



#endif //TREE_BTREE_H

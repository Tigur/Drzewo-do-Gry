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
        TreeStructure<type> *found;


        if(parentId==id)
        {
            sons.insert(new TreeStructure <type>, sons.size); // tworzymy komórkę listy ze wskaźnikiem << ważna linijka
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

        if(found=preorder(parentId,this))
        {
            found->create(parentId, value, newId);
            return true;
        }
        else
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }

    }


    bool remove(int parentId)
    {
        TreeStructure <type> *rmThis;
        if(parentId==id && size==0)
        {

            for(int i=1;i<=size;i++)
            {
                if (this->father->sons.pick(i).value == this)
                {
                    rmThis = this->father->sons.pick(i).value;
                    this->father->sons.del(i);
                }
            }

            delete rmThis;

            return true;
        }

        if(size<parentId)
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }

       if( rmThis=preorder(parentId,this))
       {
           rmThis->remove(parentId);
           return true;
       }
        else
       {
           cerr<< "There is no such a place in this tree !" << endl;
           return false;
       }

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

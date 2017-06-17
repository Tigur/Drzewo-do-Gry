//
// Created by resolution on 08.04.17.
//

#ifndef TREE_BTREE_H
#define TREE_BTREE_H
#include <iostream>


using namespace std;


template <class type>
class TreeNode
{
    //treeNode <type>  root; // zmiana wskaźnika na komórkę

    List <TreeNode> sons;
    TreeNode *father;
    type value=0;
    int id=0;


    int size=0;




    bool isLeaf()
    {
       if(sons.empty())
        return true;

        else
            return false;
    }

    TreeNode <type>* preorder (int parentNum)
    {
        TreeNode <type> *found=0;
        TreeNode <type> *currentNode=this;
        int i= 1;

        if(currentNode->id=parentNum)
            return this;

        if(isLeaf())
            return 0; //NULL
        for (i;i<currentNode->size;i++) // od 0 do ilosci synów węzła
        {
            TreeNode <type> *nextNode = currentNode->sons.pick(i).value; // do pogodzenia +++
            if (found = nextNode->preorder(parentNum))
                return found;
        }


    }

public:

    bool create (int parentId, type value, int newId)
    {

        TreeNode<type> *newTree;
        TreeNode<type> *found;


        if(parentId==id)
        {
            sons.insert(new TreeNode <type>, sons.size); // tworzymy komórkę listy ze wskaźnikiem << ważna linijka
            // sons.pick(sons.sizeT).value = new TreeNode <type> ;

            newTree=sons.pick(sons.size).value;





            newTree->id=newId;
            newTree->father=this;
            newTree->value=value;
            size ++ ;
            /*
            cout << " \nTreeNode l.84\nTo jest wartosc w utworzonym : " << endl;
            cout << newTree->value<< endl;
*/

            cout << "\n TreeNode l.88\nTo jest wartość wielkosci w utworzonym :" << endl;
            cout << newTree->size << endl;
            cout << size << endl;


/*
            cout << "\nTreeNode l.94\nTo jest tata : " << endl;
            cout << newTree->father->id << endl;

             */
            return true;
        }

        if(size<parentId)
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }

        if(found=this->preorder(parentId))
        {
            found->create(parentId, value, newId);


            cout << "TreeNode l.112\n wielkość znalezionego : " << endl;
            cout << found->getSize()<< endl;


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
        TreeNode <type> *rmThis;
        if(parentId==id && sons.size==0)
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

        if(parentId==id)
        {
            cout << "This is not a leaf, You can't just delete it ! " << endl;
            return false;
        }

        if(size<parentId)
        {
            cerr<< "There is no such a place in this tree !" << endl;
            return false;
        }

       if( rmThis=preorder(parentId))
       {
           rmThis->remove(parentId);

           cout << "\n(TreeNode l.163)\n wielkość znalezionego RM : " << endl;
           cout << rmThis->getSize()<< endl;

           cout << "id : "<< endl;
           cout << rmThis->getId()<< endl;
           cout << "\n"<< endl;
           return true;
       }
        else
       {
           cerr<< "There is no such a place in this tree !" << endl;
           return false;
       }

    }

    TreeNode <type>* show (int parentNum=100000000)
    {
        TreeNode <type> *found=0;
        TreeNode <type> *currentNode=this;
        int i= 1; currentNode->sons.size;

        cout << currentNode->id << endl;


        if(currentNode->id==parentNum)
        {

            return this;
        }
        if(isLeaf())
        {

            return 0; //NULL
        }

        for (i;i<currentNode->size;i++) // od 0 do ilosci synów węzła
        {
            TreeNode <type> *nextNode = currentNode->sons.pick(i).value; // do pogodzenia +++
            if (found = nextNode->show(parentNum))
                return found;
        }



    }



    /*TreeNode <type>* find (int parentNum)
    {
        TreeNode <type> *tmp=this;

        while(tmp->id!=parentNum)
        {
            tmp->sons.pick
        }
    }
    */












    int getSize()
    {
        return size;
    }
    List <TreeNode> getSons()
    {
        return sons;
    }
    int getId()
    {
        return id;
    }
};



#endif //TREE_BTREE_H

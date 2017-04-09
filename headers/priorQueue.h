//
// Created by resolution on 07.04.17.
//

#ifndef LIST4_PRIORQUEUE_H
#define LIST4_PRIORQUEUE_H
#include "List.h"
#include <iostream>

using namespace std;

template <class type>
class priorQueue : public  List <type>
{
    cell <type> head;
    cell <type> tail;



    cell <type> * ptr;

public:


    int size=0;

    bool insert(type value, int key)
    {


/*
        if(size==0)
        {
            (*this).push(value);

            return true;
        }

*/

        if (size==0)
        {
            cell <type> * ptr1= &head;
            cell <type> * tmp = nullptr;

            ptr1=&head;

            this->makeNplace(ptr1,value, key);


            return true;
        }



        cell <type> * ptr1= &head;
       // cell <type> * tmp = nullptr;

        while((*ptr1).key<key) // zmiana 1->0 <  ->  <=
        {
            int i=1;

            ptr1=(*ptr1).next;
            i++;

            if (i==size)
                break;
        }

        (*this).makeNplace(ptr1, value, key);

        return true;
    }


};




#endif //LIST4_PRIORQUEUE_H

//
// Created by resolution on 22.03.17.
//
#pragma once
#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H
#include"cell.h"


using namespace std;

template <class type>
class List
{

    cell <type> head;
    cell <type> tail;



    cell <type> * ptr;




public:


    int size=0;

    List()
    {
        head.next=&tail;
        head.prev=&tail;
        tail.next=&head;
        tail.prev=&head;
        tail.value=0;
    }
    ~List()
    {}



    bool empty()
    {
        if(size==0)
        return true;

        else
            return false;
    }

    bool makeNplace(cell <type> * ptr1, type value, int key)
    {
        cell<type> *tmp=0;

        tmp = new cell <type>;
        (*tmp).value = value;
        (*tmp).key=key;

        (*tmp).next = (*ptr1).next; // next wciskanego
        (*ptr1).next = tmp; // next poprzedzajćego
        (*tmp).prev = ptr1; // prev wciskanego
        (*tmp).next->prev = tmp; // prev następującego
        size++;

        return true;
    }


    bool insert(type* value, int position)
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

            tmp=new cell <type>;
            (*tmp).value=value;

            (*tmp).next=(*ptr1).next; // next wciskanego
            (*ptr1).next=tmp; // next poprzedzajćego
            (*tmp).prev=ptr1; // prev wciskanego
            (*tmp).next->prev=tmp; // prev następującego
            size ++;


            return true;
        }

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the Queue !"<< endl;

            return false;
        }

        cell <type> * ptr1= &head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<=position;++i) // zmiana 1->0 <  ->  <=
        {
            ptr1=(*ptr1).next;
        }

        tmp=new cell <type>;
        (*tmp).value=value;

        (*tmp).next=(*ptr1).next; // next wciskanego
        (*ptr1).next=tmp; // next poprzedzajćego
        (*tmp).prev=ptr1; // prev wciskanego
        (*tmp).next->prev=tmp; // prev następującego
        size ++;

        return true;
    }



    bool del(int position) // możliwy seg "kasowanie nizaalokowane pamieci"
    {

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !" << endl;

            return false;
        }



        cell <type> * ptr2=&head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr2=(*ptr2).next;
        }
        tmp=(*ptr2).next;
        (*ptr2).next=(*(*ptr2).next).next; // aktualizacja next poprzedzającego
        (*ptr2).next->prev=ptr2; // aktualizacja prev następującego

        free(tmp);

        size--;

        return true;
    }




    bool delAll() // możliwy seg
    {
        if (size ==0)
        {
            cerr<< "There is not a single element in the Queue !" << endl;

            return false;
        }

        cell <type> * tmp;

        for( int i=0;i<size;i++)
        {
            tmp=head.next;
            head.next=(*tmp).next;
            free(tmp);
            size=0;
        }


    }

    void push(type value)
    {




        cell <type> * tmp;
        tmp= new cell <type> ;


        (*tmp).value=value;
        (*tmp).next= head.next;
        head.next=tmp;

       if(size==0)
       {
           tail.next=head.next;
       }




        size++;


    }


    type pull()
    {
        cell <type>*tmp=tail.next;
        cell <type> pulled;
        pulled.value=(*tmp).value;

        tmp=head.next;
        for (int i=1;i<size-1;++i)
        {
            tmp=(*tmp).next;
        }
        if(size==1)
        {
            tail.next=&head;
            free(head.next);
            return pulled.value;
        }
        tail.next=tmp;
       delete ( (*tmp).next);
        (*tmp).next=&tail;

        return pulled.value;
    }

    void show()
    {
        cell <type> * tmp = head.next;

        for (int i=1;i<=size;++i)
        {
            cout << tmp->value << endl;
            tmp=(*tmp).next;

        }
    }

    cell<type> pick(int position)
    {
        cell <type> *ptr1= &head;

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !" << endl;

            return *ptr1 ;
        }

        for (int i=1;i<=position;++i)
        {
            ptr1=(*ptr1).next;
        }


        return *ptr1;
    }






};


#endif //QUEUE_LIST_H

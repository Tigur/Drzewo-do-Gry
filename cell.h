//
// Created by resolution on 21.03.17.
//
#pragma once
#ifndef QUEUE_H
#define QUEUE_H

template <class type>
class cell
{
public:

    type* value;
    int key;
    cell * next;
    cell * prev;

    cell()
    {
        value = 0;
        key=0;
        next = nullptr;
        prev= nullptr;
    }

};

#endif //QUEUE_H

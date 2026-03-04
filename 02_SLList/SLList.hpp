#ifndef SLLIST_H
#define SLLIST_H

#include "SLLNode.hpp"



class SLList {
public:
    SLList();

    unsigned size() const;
    bool empty() const;
    void push_front(int val);
    void print() const;
    void push_back(int val);

private:
    SLLNode* head;
    unsigned list_size;
};
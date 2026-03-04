#ifndef SLLIST_H
#define SLLIST_H

#include "SLLNode.hpp"



class SLList {
public:
    SLList();
    ~SLList();
    SLList(const SLList& other); // todo
    SLList& operator=(const SLList& other); // todo

    unsigned size() const;
    bool empty() const; // returns true to empty list
    void push_front(int val); // push node to fron
    void print() const; // print the list
    void push_back(int val); // insert the new node at the end
    void pop_front(); //  remove the first element
    void clear(); // clear the list
    // todo 
    void pop_back() // remove the last element 

private:
    SLLNode* head;
    SLLNode* head;
    unsigned list_size;
};
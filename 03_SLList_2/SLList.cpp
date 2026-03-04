#include "SLList.hpp"
#include <iostream>

SLList::SLList() {
    head = nullptr;
    tail = nullptr;
    list_size = 0;
}
SLList::~SLList(){
    clear();
}

unsigned SLList::size() const{
    return list_size;
}
bool SLList::empty() const {
    if (size() == 0){
        return true;
    }
    else{
        return false;
    }
}
void SLList::push_front(int val){
    //adds new node at the begbinning
    //SLLNode* new_node = new SLLNode(val);
    //new_node->next = head;
    //head = new_node;

    // does the same thing as above just simplier
    head = new SLLNode(val,head);

    // increase the list size
    list_size++;

    if (size() == 1){
        tail = head;
    }
}
void SLList::print(){
    std::cout <<"{ "
    SLLNode* cur = head;
    while(cur) {
        std::cout << cur->data;
        if (cur->next){
            std::cout << "->";
        }
        cur = cur->next;
    }
    std::cout << " }\n";
}
void SLList::push_back(int val){
    if (empty()){
        push_front(val);
        return;
    }
    tail->next = new SLLNode(val); // add the node to th end
    tail = tail->next; // move the tail

    list_size++;
}
void SLList::pop_front(){
    if (!empty()){
        SLLNode* old_head = head;
        head = head->next;

        delete old_head; // free the memory

        list_size--;
    }
    if (empty()){
        tail = head;
    }
}
void SLList::clear(){
    while (!empty()){
        pop_front();
    }
}


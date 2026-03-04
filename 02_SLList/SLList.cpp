#include "SLList.hpp"
#include <iostream>

SLList::SLList() {
    head = nullptr;
    list_size = 0;
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
void SLL::push_back(int val) {
    if (empty()){
        head = new 
    }
}
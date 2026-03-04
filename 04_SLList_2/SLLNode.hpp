#ifndef SLLNODE_H
#define SLLNODE_H


template <typename T>
class SLLNode {
public:
    SLLNode(const T& d = 0, SLLNode<T> *n = nullptr) {
        data = d;
        next = n;
    }

    T data;
    SLLNode<T> *next; // pointer to the next node
};


#endif
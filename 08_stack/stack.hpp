#ifndef STACK_HPP
#define STACK_HPP

namespace StackArray{
    template <typename T, int size = 10>
class Stack {
public:
    Stack();


    void push(const T& val);
    bool empty() const;
    bool full() const;
    void print() const;
    T pop();
    const T& top() const;
private:
    T data[size]; // array of stack elements
    int top_idx; // index of the top of the stack
};
};
namespace StackList{
    template <typename T, int size = 10>
class Stack {
public:
    Stack();
    ~Stack();

    void push(const T& val);
    bool empty() const;
    void print() const;
    T pop();
    const T& top() const;
private:
    class Node{
        public:
            T data;
            Nodee<T>* next;
            Nodee<T>* prev;
            Node(const T& val = T()) : data(val), next(nullptr), prev(nullptr) {}

    };
    Node<T>* bottom_node;
    Node<T>* top_node;
    int top_idx; // index of the top of the stack
};
}
template <typename T, int size = 10>
class Stack {
public:
    Stack();


    void push(const T& val);
    bool empty() const;
    bool full() const;
    void print() const;
    T pop();
    const T& top() const;
private:
    T data[size]; // array of stack elements
    int top_idx; // index of the top of the stack
};













#endif
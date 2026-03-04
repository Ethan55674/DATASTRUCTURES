#ifndef BST_HPP
#define BST_HPP
#include "BTNode.hpp"
#include <string>


template <typename T>
class BST {
public:
    BST();
    
    bool empty() const;
    void insert(const T& val);
    void insert_recursive(const T& val);
    BTNode<T>* getMinNode() const;
    BTNode<T>* searchParent(const T& val) const;
    
    void deleteNode(const T& val);
    void print() const;

    // Traversals of the tree
    void inorder() const;
    void preorder() const;
    void postorder() const;

    bool isFullTree() const;
    BTNode<T>* search(const T& val) const;


private:
    BTNode<T>* root;
    void deleteLeaf(BTNode<T>* child, BTNode<T>* parent);
    void deleteNodeWithOneChild(BTNode<T>* child, BTNode<T>* parent);
    void inorder(BTNode<T>* node) const;
    bool isFullTree(BTNode<T>* node) const;
    BTNode<T>* insert_recursive(BTNode<T>* node, const T& val);
    void print(const std::string& prefix, BTNode<T>* node, bool isRight) const;
    void deleteNodeWithTwoChildren(BTNode<T>* node);

};

#endif
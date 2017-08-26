#ifndef BST_CPP
#define BST_CPP

#include <iostream>
#include "BST.h"
using namespace std;

template <class T>
node<T>::node(): left(NULL), right(NULL) {}


template <class T>
node<T>::node(const T & val): data(val), left(NULL), right(NULL) {}



template <class T>
void node<T>::display()
{
    cout << data << endl;
}



template <class T>
BST<T>::BST(): size(0), root(NULL) {}


template <class T>
int BST<T>::insert(const T & input)
{
    node<T> * temp = new node<T>(input);
    return insert(root, temp);
}


template <class T>
int BST<T>::display()
{
    return display(this->root);
}



template <class T>
int BST<T>::insert(node<T> * & root, node<T> * input)
{
    // NULL tree
    if(!root) {
        root = input;
        if(root == this->root) this->root = root;
        return 1;
    }
    if(input->data < root->data) return insert(root->left, input);
    return insert(root->right, input);
}


template <class T>
int BST<T>::display(node<T> * root)
{
    if(!root) return 0;
    int count = display(root->left);
    cout << root->data << endl;
    ++ count;
    return count + display(root->right);
}

#endif

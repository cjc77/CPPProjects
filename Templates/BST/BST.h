#ifndef BST_H
#define BST_H


template <class T>
struct node
{
    node();
    node (const T &);
    void display();
    T data;
    node * left;
    node * right;
};


template <class T>
class BST
{
    public:
        BST();
        int insert(const T &);
        int display();

    private:
        // Data members
        int size;
        node <T> * root;

        // Functions
        int insert(node<T> * &, node<T> *);
        int display(node<T> *);

};



#endif


// Templates must be defined within the .h, so just include the source in here
#include "BST.cpp"

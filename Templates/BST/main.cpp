#include "BST.h"



int main()
{
    BST<int> my_tree;
    my_tree.insert(1);
    my_tree.insert(2);
    my_tree.insert(4);
    my_tree.insert(5);
    my_tree.insert(3);
    cout << "\nCurrent Tree: " << endl;
    int count = my_tree.display();
    cout << "\n\n" << count << " items in tree." << endl;
    return 0;
}

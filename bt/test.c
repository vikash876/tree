#include <stdio.h>
#include <tree_utils.h>


void main()
{
    struct tree_node *root = NULL;
    root = tree_add_node(1);
    #if 1
    root->left = tree_add_node(2);
    root->right = tree_add_node(3);
    root->left->left = tree_add_node(4);
    root->left->right = tree_add_node(5);
    root->right->left = tree_add_node(6);
    root->right->right = tree_add_node(7);
    #endif
    tree_preorder_print(root);
}

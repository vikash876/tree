#include <tree_util.h>
#include <stdio.h>


void tree_mirror(struct tree_node *tree)
{
    if(tree == NULL)
        return;

    struct tree_node *temp;

    temp = tree->left;
    tree->left = tree->right;
    tree->right = temp;

    tree_mirror(tree->left);
    tree_mirror(tree->right);
}

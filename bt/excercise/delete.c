#include <tree_util.h>
#include <stdio.h>


void delete(struct tree_node *root)
{
    /* do a post order traversal and then delete the root */
    if(root == NULL)
        return;

    delete(root->left);
    delete(root->right);

    free(root);
}

#include <tree_util.h>
#include <stdio.h>


int tree_height(struct tree_node *root)
{

    int l, r;
    if(root == NULL)
        return 0;

    l = tree_height(root->left);
    r = tree_height(root->right);

    if(l>r) {
        return l+1;
    } else {
        return r+1;
    }
}

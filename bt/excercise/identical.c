#include <tree_util.h>
#include <stdio.h>

int tree_check_identical(struct tree_node *left_root, struct tree_node *right_root)
{
    if((left_root == NULL) && (right_root == NULL)) {
        return 1;
    }

    if((left_root != NULL) && (right_root != NULL)) {

        return ( (left_root->data == right_root->data) &&
                 tree_check_identical(left_root->left, right_root->left) &&
                 tree_check_identical(left_root->right, right_root->right));
    }

    return 0;
}

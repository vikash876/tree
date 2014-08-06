#include <tree_util.h>
#include <stdio.h>


void tree_r2l_path(struct tree_node *root, int a[], int index)
{
    if(root == NULL)
        return;
    int i;

    a[index] = root->data;
    index++;

    if(root->left == NULL && root->right == NULL) {
        printf("path: ");
        for(i=0; i<index; i++)
            printf("-%d", a[i]);
    }
    printf("\n");

    tree_r2l_path(root->left, a, index);
    tree_r2l_path(root->right, a, index);
}

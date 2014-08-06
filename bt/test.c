#include <stdio.h>
#include <tree_util.h>


void main()
{
    int a[30];
    int count = 0;
    struct tree_node *root = NULL;
    root = tree_add_node(1);
    root->left = tree_add_node(2);
    root->right = tree_add_node(3);
    root->left->left = tree_add_node(4);
    root->left->left->right = tree_add_node(10);
    root->left->right = tree_add_node(5);
    root->left->right->right = tree_add_node(50);
    root->right->left = tree_add_node(6);
    root->right->right = tree_add_node(7);

    struct tree_node *root2 = NULL;
    root2 = tree_add_node(1);
    root2->left = tree_add_node(2);
    root2->right = tree_add_node(3);
    root2->left->left = tree_add_node(4);
    root2->left->left->right = tree_add_node(10);
    root2->left->right = tree_add_node(5);
    root2->right->left = tree_add_node(6);
    root2->right->right = tree_add_node(7);
    //tree_preorder_print(root);
    tree_postorder_iterative_print(root);
    printf("Tree size(9) = %d\n", tree_size(root));
    printf("Height is %d\n", tree_height(root));
    printf("Check identical for same tree = %d\n", tree_check_identical(root, root2));
    tree_mirror(root);
    tree_postorder_iterative_print(root);
    tree_r2l_path(root, a, count);
}

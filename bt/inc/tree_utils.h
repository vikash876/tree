#ifndef TREE_UTILS_H
#define TREE_UTILS_H

struct tree_node
{
    int data;
    struct tree_node *left;
    struct tree_node *right;
};

struct tree_node *tree_add_node(int num);
void tree_preorder_print(struct tree_node *root);
void tree_inorder_print(struct tree_node *root);
void tree_postorder_print(struct tree_node *root);

#endif

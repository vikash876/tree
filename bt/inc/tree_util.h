#ifndef TREE_UTILS_H
#define TREE_UTILS_H


#define STACK_MAX_SIZE 40

struct tree_node
{
    int data;
    struct tree_node *left;
    struct tree_node *right;
};

struct stack {
    struct tree_node *a[STACK_MAX_SIZE];
    int top;
};



struct tree_node *tree_add_node(int num);
void tree_preorder_print(struct tree_node *root);
void tree_inorder_print(struct tree_node *root);
void tree_postorder_print(struct tree_node *root);

void push(struct stack *S, struct tree_node *new_node);
struct tree_node * pop(struct stack *S);
int isEmpty(struct stack *S);
struct tree_node *top(struct stack *S);

#endif

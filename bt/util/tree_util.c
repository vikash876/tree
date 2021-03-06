#include <tree_util.h>
#include <stdio.h>
#include <malloc.h>


void stack_init(struct stack *S) {
    S->top = -1;
}

void push(struct stack *S, struct tree_node *new_node) {
    if(S->top == STACK_MAX_SIZE-1) {
        printf("Stack is full\n");
    }
    S->top++;
    S->a[S->top] = new_node;
}

struct tree_node * pop(struct stack *S) {
    if(S->top == -1)
    {
        printf("Stack empty\n");
        return NULL;
    }
    return S->a[S->top--];
}

int isEmpty(struct stack *S){
    if(S->top==-1)
        return 1;
    return 0;
}

struct tree_node *top(struct stack *S) {
    return S->a[S->top];
}


struct tree_node *tree_add_node(int num)
{
    struct tree_node *root = malloc(sizeof(struct tree_node));
    root->left = NULL;
    root->right = NULL;
    root->data = num;
    return root;
}

void tree_preorder(struct tree_node *root)
{
    if(root==NULL)
        return;
    printf("-%d", root->data);
    tree_preorder(root->left);
    tree_preorder(root->right);
}

void tree_preorder_print(struct tree_node *root)
{
    printf("Preorder Sequence: ");
    tree_preorder(root);
    printf("\n");
}

void tree_inorder(struct tree_node *root)
{
    if(root==NULL)
        return;
    tree_inorder(root->left);
    printf("-%d", root->data);
    tree_inorder(root->right);
}

void tree_inorder_print(struct tree_node *root)
{
    printf("Inorder Sequence: ");
    tree_inorder(root);
    printf("\n");
}

void tree_postorder(struct tree_node *root)
{
    if(root==NULL)
        return;
    tree_postorder(root->left);
    tree_postorder(root->right);
    printf("-%d", root->data);
}

void tree_postorder_print(struct tree_node *root)
{
    printf("Posetorder Sequence: ");
    tree_postorder(root);
    printf("\n");
}

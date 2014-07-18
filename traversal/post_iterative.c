#include <stdio.h>
#include <malloc.h>

struct node *S[30];
int top = -1;

void push(struct node *S[], struct node *root)
{
    if(top==30)
        printf("srtack full\n");
    else
        top++;
        S[top] = root;
}

struct node *pop(struct node *S[])
{
    if(top==-1)
        printf("Stack empty\n");
    else
        return S[top--];
    return 0;
}

int isEmpty(struct node *s[])
{
    if(top==-1)
    return 1;
    return 0;
}

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int num)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = num;
    return temp;
}

void inorder(struct node *tree)
{
    if(tree->left)
        inorder(tree->left);
    printf("_%d_", tree->data);
    if(tree->right)
        inorder(tree->right);
}

void main()
{
    struct node *tree = NULL;
    #if 0
    tree = create_node(20);
    tree->left = create_node(10);
    tree->right = create_node(30);
    tree->left->right = create_node(15);
    tree->left->right->left = create_node(11);
    tree->left->right->right = create_node(12);
    tree->right->left = create_node(25);
    tree->right->right = create_node(35);
    #endif
    ///inorder(tree);
    //printf("\n");
    postOrderIterative(tree);
   // printf("\n");
    //postOrderRec(tree);
    printf("\n");
}

void postOrderRec(struct node *root)
{
    if(root->left)
    postOrderRec(root->left);
    if(root->right)
    postOrderRec(root->right);
    printf("(%d)", root->data);
}

#if 1
void postOrderIterative (struct node *root)
{
    printf("Inside\n");
    while(1) {
        while(root) {
            push(S, root);
            root = root->left;
        }

        if(isEmpty(S))
        {
            printf("returning\n");
            return;
        }

        if(S[top]->right != NULL) {
            root = S[top]->right;
        } else {

            root = pop(S);
            printf("-%d-",root->data);
            while((!isEmpty(S)) && (S[top]->right == root)) {
                root = pop(S);
                printf("-%d-",root->data);
            }
            root = NULL;
        }
    }
}

#endif

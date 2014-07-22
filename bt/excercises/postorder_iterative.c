#include <tree_utils.h>
#include <stdio.h>

void tree_postorder_iterative(struct tree_node *root)
{
    tree_stack S;
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

        if(top(S)->right != NULL) {
            root = top(S)->right;
        } else {

            root = pop(S);
            printf("-%d-",root->data);
            while((!isEmpty(S)) && (top(S)->right == root)) {
                root = pop(S);
                printf("-%d-",root->data);
            }
            root = NULL;
        }
    }
}


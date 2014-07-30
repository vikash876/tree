#include <tree_util.h>
#include <stdio.h>

void tree_postorder_iterative (struct tree_node *root)
{
    struct stack S;
    stack_init(&S);
    while(1) {
        /* push all left left nodes includeing root untill it becomes null */
        while(root) {
            push (&S, root);
            root = root->left;
        }
        /* Return if stack does not have anything in it */
        if(isEmpty(&S)) {
            return ;
        }
        /* pop only in case of last encountered node has both childs null */
        /* If last encountered node does have right child then we can not pop it.
           instead, push that right child in stack, change current node to right child */
        if(top(&S)->right == NULL) {
            /* At this point it can either be a left child or right child.
               first print the data */
            root = pop(&S);
            printf("-%d", root->data);
            /* loop and print untill popped node is right child */
            while (!isEmpty(&S) && (root == top(&S)->right)) {
                root = pop(&S);
                printf("-%d", root->data);
            }
            /* making root as null means we have encountered all the left child
             * and the left child of crrent node in stack is now null (no processing)*/
            root = NULL;
        } else {
            /* this right child will be push in next iteration of loop */
            root = top(&S)->right;
        }
    }
}

void tree_postorder_iterative_print(struct tree_node *root) {
    printf("postorder traversal is -----> ");
    tree_postorder_iterative(root);
    printf("\n");
}

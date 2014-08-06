#include <tree_util.h>
#include <stdio.h>


int tree_size(struct tree_node *root)
{
	if(root == NULL)
		return 0;	
    return (1+tree_size(root->left)+tree_size(root->right));	
}

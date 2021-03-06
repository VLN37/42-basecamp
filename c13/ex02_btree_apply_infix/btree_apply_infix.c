#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	applyf((void *)&root->nbr);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}

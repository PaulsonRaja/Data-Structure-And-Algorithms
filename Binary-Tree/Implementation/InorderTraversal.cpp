#include <iostream>
using namespace std;

struct node {
    int val;
    struct node *left;
    struct node *right;
    node(int val);
};

node::node(int val)
{
    this->val = val;
    left = NULL;
    right = NULL;
}

/*
 * TC - O(N) ( We have traverse all the nodes. )
 * SC - O(N) ( Skewed tree at worst case. )
 */
void inorder_traversal(node *root)
{
    if (root == NULL)
	return;
    inorder_traversal(root->left);
    cout << root->val << " ";
    inorder_traversal(root->right);
}

struct node *create_tree()
{
    struct node *root = NULL;
    int root_data;

    cout << "Enter the node value:" << endl;
    cin >> root_data;
    root = new struct node (root_data);
    if (root_data == -1)
	return NULL;
    root->left = create_tree();
    root->right = create_tree();
    return root;
}

void print_tree_detailed(struct node *root)
{
    if (root == NULL)
	return;
    cout << root->val << ": ";
    if (root->left != NULL)
	cout << "L: " << root->left->val << ", ";
    if (root->right != NULL)
	cout << "R: " << root->right->val << "";
    cout << "\n";
    print_tree_detailed(root->left);
    print_tree_detailed(root->right);
}

int main()
{
    struct node *root = NULL;

    cout << "Enter the node values use -1 for no left or right child" << endl;
    root = create_tree();
    cout << "\n";

    cout << "Tree representation:" << endl;
    print_tree_detailed(root);
    cout << "\n";

    cout << "Preorder traversal of tree:" << endl;
    inorder_traversal(root);
    cout << "\n";
    return 0;
}

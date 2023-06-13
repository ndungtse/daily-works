// binary tree traversal ways
#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Inorder traversal
void printInorder(struct Node* node)
{
    if(node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

// Preorder traversal
void printPreorder(struct Node* node)
{
    if(node == NULL)
    {
        return;
    }
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

// Postorder traversal
void printPostorder(struct Node* node)
{
    if(node == NULL)
    {
        return;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}


int main()
{
    struct Node* root = new Node(25);
    root->left = new Node(15);
    root->right = new Node(50);
    root->left->left = new Node(10);
    root->left->right = new Node(22);
    root->left->left->left = new Node(4);
    root->left->left->right = new Node(12);
    root->left->right->left = new Node(18);
    root->left->right->right = new Node(24);
    root->right->left = new Node(35);
    root->right->right = new Node(70);
    root->right->left->left = new Node(31);
    root->right->left->right = new Node(44);
    root->right->right->left = new Node(69);
    root->right->right->right = new Node(90);
    
    cout << "Inorder traversal: ";
    printInorder(root);
    cout << endl;
    
    cout << "Preorder traversal: ";
    printPreorder(root);
    cout << endl;
    
    cout << "Postorder traversal: ";
    printPostorder(root);
    cout << endl;
    
    return 0;
}
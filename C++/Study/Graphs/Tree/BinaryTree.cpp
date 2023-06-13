#include<iostream>
#include<queue>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data)
{
    if(root == NULL)
    {
        root = createNode(data);
    }
    else if(data <= root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

bool searchNode(Node* root, int data)
{
    if(root == NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(data <= root->data)
    {
        return searchNode(root->left, data);
    }
    else
    {
        return searchNode(root->right, data);
    }
}

void printTree(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

// BST 

int main()
{
    Node* root = NULL;
    root = insertNode(root, 15);
    root = insertNode(root, 10);
    root = insertNode(root, 20);
    root = insertNode(root, 25);
    root = insertNode(root, 8);
    root = insertNode(root, 12);

    int number;
    cout << "Enter number to be searched: ";
    cin >> number;
    if(searchNode(root, number) == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    cout << "Tree: ";
    printTree(root);
    return 0;
}
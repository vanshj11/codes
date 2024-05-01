#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

struct Node *newNode(int val)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    node->val = val;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void preOrder(struct Node *temp)
{
    if (temp != NULL)
    {
        cout << " " << temp->val;
        preOrder(temp->left);
        preOrder(temp->right);
    }
}

void inOrder(struct Node *temp)
{
    if (temp != NULL)
    {
        inOrder(temp->left);
        cout << " " << temp->val;
        inOrder(temp->right);
    }
}

void postOrder(struct Node *temp)
{
    if (temp != NULL)
    {
        postOrder(temp->left);
        postOrder(temp->right);
        cout << " " << temp->val;
    }
}

struct Node *insert(struct Node *node, int val)
{
    if (node == NULL)
    {
        return newNode(val);
    }
    if (val < node->val)
    {
        node->left = insert(node->left, val);
    }
    else
    {
        node->right = insert(node->right, val);
    }

    return node;
}

struct Node *minValueNode(struct Node *node)
{
    struct Node *temp = node;
    while (temp && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

struct Node *deleteNode(struct Node *root, int val)
{
    if (root == NULL)
        return root;

    if (val < root->val)
    {
        root->left = deleteNode(root->left, val);
    }
    else if (val > root->val)
    {
        root->right = deleteNode(root->right, val);
    }
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
        struct Node *temp = minValueNode(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder traversal: ";
    inOrder(root);

    cout << "\nAfter deleting 10\n";
    root = deleteNode(root, 10);
    cout << "Inorder traversal: ";
    inOrder(root);

    cout << "\nPreorder traversal: ";
    preOrder(root);
    cout << "\nPostorder traversal: ";
    postOrder(root);

    return 0;
}
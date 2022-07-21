#include <iostream>
using namespace std;

struct Node
{
  char data;
  Node *left;
  Node *right;
};

void Preorder(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data;
  Preorder(root->left);
  Preorder(root->right);
}

void Inorder(Node *root)
{
  if (root == NULL)
    return;
  Inorder(root->left);
  cout << root->data;
  Inorder(root->right);
}

void Postorder(Node *root)
{
  if (root == NULL)
    return;
  Postorder(root->left);
  Postorder(root->right);
  cout << root->data;
}

Node *Insert(Node *root, char data)
{
  if (root == NULL)
  {
    root = new Node();
    root->data = data;
    root->left = root->right = NULL;
  }
  else if (data <= root->data)
    root->left = Insert(root->left, data);
  else
    root->right = Insert(root->right, data);
  return root;
}

int main()
{
  /*Code To Test the logic
    Creating an example tree
          M
         / \
        B   Q
       / \   \
      A   C   Z
    */
  Node *root = NULL;
  root = Insert(root, 'M');
  root = Insert(root, 'B');
  root = Insert(root, 'Q');
  root = Insert(root, 'Z');
  root = Insert(root, 'A');
  root = Insert(root, 'C');
  cout << "Preorder: ";
  Preorder(root);
  cout << "\n";
  cout << "Inorder: ";
  Inorder(root);
  cout << "\n";
  cout << "Postorder: ";
  Postorder(root);
  cout << "\n";
}
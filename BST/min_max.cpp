#include <iostream>
using namespace std;

struct BstNode
{
  int data;
  BstNode *left;
  BstNode *right;
};

BstNode *GetNewNode(int data)
{
  BstNode *newNode = new BstNode();
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

BstNode *Insert(BstNode *root, int data)
{
  if (root == NULL)
    root = GetNewNode(data);
  else if (data <= root->data)
    root->left = Insert(root->left, data);
  else
    root->right = Insert(root->right, data);

  return root;
}

int FindMin(BstNode *root)
{
  if (root->left == NULL)
    return root->data;
  else
    return FindMin(root->left);
}

int FindMax(BstNode *root)
{
  if (root->right == NULL)
    return root->data;
  else
    return FindMax(root->right);
}

int main()
{
  BstNode *root = NULL;
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 14);
  root = Insert(root, 8);
  root = Insert(root, 28);
  root = Insert(root, 12);
  int min = FindMin(root);
  cout << min << endl;
  int max = FindMax(root);
  cout << max;
}
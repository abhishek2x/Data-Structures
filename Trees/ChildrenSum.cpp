// Sum of children = parent data

#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *left, *right;
  Node(int value) {
    data = value;
    left = NULL;
    right = NULL;
  }
};
 
bool IsCProperty(Node* root) {
  if(root == NULL) {
    return true;
  }
  if(root->left == NULL && root->right == NULL) {
    return true;
  }
  int sum = 0;
  if(root->left) {
    sum += root->left->data;
  }
  if(root->right) {
    sum += root->right->data;
  }

  if(root->data == sum && IsCProperty(root->left) && IsCProperty(root->right)) {
    return true;
  }
  return false;
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(5);
  root->left->left = new Node(2);
  root->left->right = new Node(3);
  
  cout << IsCProperty(root);
}
/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// abs(left-right) < 1 for being balanced

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct Node {
  int data;
  Node *left, *right;
  Node(int v) {
    data = v;
    left = NULL;
    right = NULL;
  } 
};

bool isBalanced(Node* root, int *height) {
  if(root == NULL) {
    *height = 0; 
    return true;
  }
  
  int lh=0, rh=0;
  bool lb = isBalanced(root->left, &lh);
  bool rb = isBalanced(root->right, &rh);

  *height = (lh > rh ? lh : rh) + 1; 
  if(abs(lh-rh) > 1) {
    return false;
  }
  return lb && rb;
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(3);
  root->left->left = new Node(2);
  root->left->right = new Node(1);
  
  int height=0;

  cout << isBalanced(root, &height);
}

/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct Node {
  Node *left, *right;
  int data;
  Node(int val){
    left = NULL;
    right = NULL;
    data = val;
  }
};

void atK(Node* root, int k) {
  if(root == NULL) {
    return;
  }
  if(k == 0) {
    cout << root->data << " ";
  }
  
  atK(root->left, k-1);
  atK(root->right, k-1);

  return;
}
 
int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(3);
  root->left->left = new Node(2);
  root->left->right = new Node(1);
  
  int k=2;
  atK(root, k);
}

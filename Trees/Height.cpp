// Height / Depth

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

int getHeight(Node* root) {
  if(root == NULL){
    return 0;
  }
  int lh = getHeight(root->left);
  int rh = getHeight(root->right);
  return max(lh, rh)+1;
} 

int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(3);
  root->left->left = new Node(2);
  root->left->right = new Node(1);
  
  cout << getHeight(root);
}

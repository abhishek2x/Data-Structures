// check tree is bst
// Corrent and Efficient

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

int isBSTUtil(Node* node, int min, int max)  
{  
    if (node==NULL)  
        return 1;  
              
    if (node->data < min || node->data > max)  
        return 0;  
      
    return
        isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max);  
}  

bool isBST(Node *root) {
  return(isBSTUtil(root, INT_MIN, INT_MAX));  
}

int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(15);
  root->left->left = new Node(1);
  root->left->right = new Node(4);
  
  cout << isBST(root);
}

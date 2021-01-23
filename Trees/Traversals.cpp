// Inorder, Preorder, Postorder and LevelOrder

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

void Inorder(Node *root) {
  if(root == NULL) {
    return;
  }
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

void Postorder(Node *root) {
  if(root == NULL) {
    return;
  }
  Inorder(root->left);
  Inorder(root->right);
  cout << root->data << " ";
}

void Preorder(Node *root) {
  if(root == NULL) {
    return;
  }
  cout << root->data << " ";
  Inorder(root->left);
  Inorder(root->right);
}

void LevelOrder(Node *root) {

  queue<Node*> q;
  q.push(root);
  while(!q.empty()) {
    Node* current = q.front();
    q.pop();
    cout << current->data << " ";

    if(current->left) {
      q.push(current->left);
    } 
    if(current->right) {
      q.push(current->right);
    } 

  }
}


int main(){
  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(3);
  root->left->left = new Node(2);
  root->left->right = new Node(1);
  

  Inorder(root);
  cout << "\n";
  
  Preorder(root);
  cout << "\n";
  
  Postorder(root);
  cout << "\n";
  
  LevelOrder(root);

}
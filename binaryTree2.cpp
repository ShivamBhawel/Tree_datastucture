#include<iostream>
using namespace std;

struct node{

           int data;
           node* left;
           node* right;
};

node* newNode(int data){
     
      node* temp = new node();
      temp->data = data;
      temp->left = NULL;
      temp->right = NULL;

      return temp;
}
int main(){

    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
} 

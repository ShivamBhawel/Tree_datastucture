#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node{

     public:
           int data;
           node* left;
           node* right;

           node(int data){

              this->data = data;
              this->left = NULL;
              this->right = NULL;
           }
};

void levelOrderTra(node* root){

       queue<node*>q;
       q.push(root);
       q.push(NULL);
       vector<int>v;

       while( !q.empty() ){

           node* temp = q.front();
           q.pop();

           if(temp == NULL){
              cout<<endl;

               if(!q.empty()){
             q.push(NULL);
           }
           }else{
              cout<<temp->data <<" ";
              v.push_back(temp->data);

              if(temp->left){
                q.push(temp->left);
              }
              if(temp->right){
                q.push(temp->right);
              }
           }
          
       }
}

int main(){

   
}
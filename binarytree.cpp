#include<iostream>
#include<queue>
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

  node* buildTree(node* root)
  {
         cout<<"enter the data: "<<endl;
         int data;
         cin>> data;
         root =  new node(data);
        
       

         if(data == -1 )
         {
            return NULL;
         }

        cout<<"enter data for left  of " << data << endl;
        root->left = buildTree(root->left);

        cout<<"enter data for right of "<<data<< endl;
        root->right = buildTree(root->right);

           return root;

  }

  void inorder(node* root)
  {
       if(root == NULL)
       {
          return;
       }
       inorder(root->left);
       cout<<root->data<<" ";
       inorder(root->right);
  }

   void preorder(node* root)
   {
        //NLR

        if(root == NULL)
        {
           return;
        }

        cout<< root->data <<" ";
        preorder(root->left);
        preorder(root->right);
   }

   void postorder(node* root)
   {
         if(root == NULL)
         {
             return;
         }
         postorder(root->left);
         postorder(root->right);
         cout<< root->data <<" ";
   }

   void levelOrderTravarsal(node* root)
   {
      queue<node*> q;
      q.push(root);
      q.push(NULL);

      while(!q.empty())
      {
           node* temp = q.front();
           q.pop();

           if( temp == NULL)
           {
             cout<<endl;
             if(!q.empty()){
               
               q.push(NULL);
            }
           }
           else{
          cout<< temp->data << " ";

            if(temp->left) {

            q.push(temp->left);
           }
          if(temp->right)
           {
              q.push(temp -> right);
           }
           }        
      }
        
   }

   void buildFromeLevelOrder(node* &root){

      queue<node*>q;
      cout<<"Enter the data for root =  "<<endl;
      int data;
      cin>>data;
      root = new node(data);
      q.push(root);

      while(!q.empty()){

           node* temp = q.front();
           q.pop();

           cout<<"enter the left node for : "<< temp->data <<endl;
           int leftdata;
           cin>>leftdata;
           if(leftdata != -1){
            temp->left = new node(leftdata);
            q.push(temp->left);
           }

            cout<<"enter the right node for : "<< temp->data <<endl;
           int rightdata;
           cin>>rightdata;
           if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
           }
      }
   }
  
int main()
{
    node* root = NULL;

  root = buildTree(root);
 //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
 // levelOrderTravarsal(root);
/* 
 cout<<"Inorder Travarsal "<<endl;

 inorder(root);

  cout<<endl;
 cout<<"preorder Travarsal"<<endl;
 preorder(root);

  cout<<endl;

cout<<"Postordar Travarsar "<<endl;
postorder(root);

*/

// buildFromeLevelOrder(root);
// levelOrderTravarsal(root);
preorder(root);

}


/*
     1 
    / \
  2     3
 / \   / \
4   5 6   7

*/
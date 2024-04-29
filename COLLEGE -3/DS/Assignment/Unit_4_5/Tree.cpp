#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
};


    Node *addNode(Node *root,int data){
        if(root==NULL){
            root = new Node();
            root->left = NULL;
            root->data = data;
            root->right = NULL;
            return root;
        }
        else{
            if(root->data<data){
                root->right = addNode(root->right,data);
            }
            else{
                root->left = addNode(root->left,data);
            }
        }
        return root;
    }

    void Inorder(Node *root){
        if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
        }
    }

    void Postorder(Node *root){
        if(root!=NULL){
            Postorder(root->left);
            Postorder(root->right);
            cout<<root->data<<" ";
        }
    }

    void Preorder(Node *root){
        if(root!=NULL){
            cout<<root->data<<" ";
            Preorder(root->left);
            Preorder(root->right);
        }
    }

int main(){
    Node *root = NULL;
    root = addNode(root,60);
    addNode(root,70);
    addNode(root,85);
    addNode(root,40);
    addNode(root,45);
    Inorder(root);
    Postorder(root);
    Preorder(root);
}
 #include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node( int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;

    }
};

//* root left right
void preorder( Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

//* left root right
void inorder( Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

//* left right root
void postorder( Node* root){
    if(root==NULL) return;
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->val<<" ";
}
 
 int main(){
    Node* a = new Node(-1);
    Node* b = new Node(-2);
    Node* c = new Node(-3);
    Node* d = new Node(-15);
    Node* e = new Node(-24);
    Node* f = new Node(-3);
    Node* g = new Node(-1);
    Node* h = new Node(-2);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;

    preorder(a);
    inorder(a);
    postorder(a);
    

 }
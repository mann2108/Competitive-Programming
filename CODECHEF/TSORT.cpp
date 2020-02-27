/**
Advanced Level CCDSAP Practice.
@author mann2108
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct Node{
    ll data;
    ll count;
    struct Node *left;
    struct Node *right;
};

class BST{
public:
    Node * root;
    bool find(Node *);
    void insert(Node*,ll);
    void remove(Node *);
    Node * createNewNode();

    void preOrder(Node *);
    void postOrder(Node *);
    void inOrder(Node *);

    BST(){
        root=createNewNode();
    }
};

Node* BST :: createNewNode(){
    Node * newNode = new Node;
    newNode->data=NULL;
    newNode->left=NULL;
    newNode->right=NULL;
    newNode->count=1;
    return newNode;
}


void BST :: insert(Node * root,ll x){

    if(root->data==NULL){
        root->data=x;
    }
    else{
        if(root->data==x){
            root->count++;
        }
        else if(x<root->data){
            if(root->left==NULL){
                Node * temp = createNewNode();
                temp->data=x;
                root->left=temp;
            }
            else{
                insert(root->left,x);
            }
        }
        else{
            if(root->right==NULL){
                Node * temp = createNewNode();
                temp->data=x;
                root->right=temp;
            }
            else{
                insert(root->right,x);
            }
        }
    }
}

void BST ::  preOrder(Node *ptr){
    if(this->root==NULL){
        cout<<"TREE IS EMPTY !!";
    }
    if(ptr!=NULL){
        preOrder(ptr->left);
        for(ll i=0;i<(ptr->count);i++)
            cout<<ptr->data<<endl;
        preOrder(ptr->right);
    }
}

int main(){

    ll n;
    cin>>n;
    BST obj;
    ll x;
    while(n--){
        cin>>x;
        obj.insert(obj.root,x);
    }
    obj.preOrder(obj.root);
}
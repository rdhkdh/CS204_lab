#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node* left;
    Node* right;
    Node* parent;

    Node(int x) //constructor
    {
        data = x;
        left = NULL;
        right = NULL;
        parent=NULL;
    }
};


void bst_insert(Node* root,Node* z)
{
    Node* y= NULL;
    Node* x= root;
    while(x!=NULL)
    {
        y=x;
        if(z->data < x->data) {x=x->left;}
        else if(z->data >= x->data) {x=x->right;}
    }
    z->parent=y;
    if(z->data < y->data) { y->left=z;}
    else if(z->data >= y->data) {y->right = z;}

}

void inorder(Node* x)
{
    if(x!=NULL)
    {
        inorder(x->left);
        cout<<x->data<<" ";
        inorder(x->right);
    }
}

void preorder(Node* x)
{
    if(x!=NULL)
    {
        cout<<x->data<<" ";
        preorder(x->left);
        preorder(x->right);
    }
}

void postorder(Node* x)
{
    if(x!=NULL)
    {
        postorder(x->left);
        postorder(x->right);
        cout<<x->data<<" ";
    }
}

Node* tree_search(Node* root,int k)
{
    if(k==root->data) {return root;}
    else if(k < root->data)
    {
        return tree_search(root->left,k);
    }
    else 
    {
        return tree_search(root->right,k);
    }

}

void update(Node* root, int a, int b)
{
    Node* w= tree_search(root,a);
    w->data=b;
}

void transplant(Node* root, Node* u, Node* v)
{
    if(u->parent==NULL) { root=v;}
    else if(u==u->parent->left) {u->parent->left = v;}
    else{u->parent->right = v;}

    if(v!=NULL) {v->parent = u->parent;}
}

Node* tree_min(Node* x)
{
    while(x->left!=NULL) { x=x->left; }
    return x;
}

void delete_node(Node* root, Node* z)
{
    if(z->left==NULL) {transplant(root,z,z->right);}
    else if(z->right==NULL) {transplant(root,z,z->left);}
    else
    {
        Node* y=tree_min(z->right);
        if(y->parent!=z) 
        {
            transplant(root,y,y->right);
            y->right= z->right;
            y->right->parent=y;
        }
        transplant(root,z,y);
        y->left=z->left;
        y->left->parent = y;
    }
}

int main()
{
    cout<<"Specify total no. of elements in BST: ";
    int n;
    cin>>n;

    cout<<"Specify root value: "<<endl;
    int val;
    cin>>val;
    Node* root= new Node(val);

    for(int i=0;i<n-1;i++)
    {
        cout<<"insert element: ";
        int x;
        cin>>x;
        Node* z= new Node(x);
        bst_insert(root,z);
    }
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    Node* searched_node= tree_search(root,1);
    // cout<< searched_node->left->data <<endl; //search also works!!!
    delete_node(root,searched_node);

    // update(root,2,3);
    inorder(root);
    // cout<<endl;



}

//insert element in order: 6,4,2,5,8,7,9

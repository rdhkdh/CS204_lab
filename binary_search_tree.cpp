#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) //constructor
    {
        data = x;
        left = NULL;
        right = NULL;
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

    Node* searched_node= tree_search(root,8);
    cout<< searched_node->left->data <<endl; //search also works!!!

    update(root,2,3);
    inorder(root);
    cout<<endl;
}



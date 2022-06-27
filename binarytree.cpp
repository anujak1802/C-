#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preOrder(struct Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(struct Node*root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i; 
        }
    }
    return -1;
}

Node*buildTreePre(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node*node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->left=buildTreePre(preorder,inorder,start,pos-1);
    node->right=buildTreePre(preorder,inorder,pos+1,end);
    return node;
}

Node*buildTreePost(int postorder[],int inorder[],int start,int end){
    static int idx= 4;
    if(start>end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    Node *curr=new Node(val);
    if(start==end){
        return curr;
    }
    int pos=search(inorder,start,end,val);
    curr->right=buildTreePost(postorder,inorder,pos+1,end);
    curr->left=buildTreePost(postorder,inorder,start,pos-1);

    return curr;
}

void inorderPrint(Node*root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    // struct Node*root=new Node(1);
    // root->left=new Node(2);
    // root->right=new Node(3);

    // root->left->left=new Node(4);
    // root->left->right=new Node(5);
    // root->right->left=new Node(6);
    // root->right->right=new Node(7);

    // preOrder(root);
    Node*root=buildTreePost(postorder,inorder,0,4);
    inorderPrint(root);
    // cout<<endl;
    // inOrder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;
    return 0;
}
#include<iostream>

using namespace std;
class Node{
     public:
     int data;
     Node*left,*right;
     Node(int value){
        left=right=NULL;
        data=value;
     }
};


void sumofTree(Node*root,long int &sum)
{
    if(root==NULL)
    return;
    sum+=root->data;
    sumofTree(root->left,sum);
    sumofTree(root->right,sum);
}

long int sumofBT(Node*root){
    long int sum=0;
    sumofTree(root,sum);
    return sum;
}
// cout<<count<<endl;
Node*BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node*temp=new Node(x);

    //Left side create..
    cout<<"Enter the left child of"<<x<<":";
    temp->left=BinaryTree();

    //Right side Create..-1
    cout<<"Enter the Right of"<<x<<":"; 
    temp->right=BinaryTree();
    return temp;
}
int main(){
   cout<<"Enter the root Node";
   Node*root;
   root=BinaryTree();
   

cout<<endl;
 cout<<sumofBT(root);
// cout<<count<<endl;
}
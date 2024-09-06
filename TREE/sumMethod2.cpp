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


long int sumBT(Node* root)
{
    if(root==NULL)
    return 0;
    return (root->data+sumBT(root->left)+sumBT(root->right));
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
 cout<<sumBT(root);
// cout<<count<<endl;
}
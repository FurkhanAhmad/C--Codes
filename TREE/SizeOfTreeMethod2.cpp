#include<iostream>
#include<queue>
#include<vector>
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



int getSize(Node*root)
{
    if(root==NULL)
    return 0;
    return (1+getSize(root->left)+getSize(root->right));
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

cout<<"sizeOf Tree:"<<getSize(root);
// cout<<count<<endl;
}
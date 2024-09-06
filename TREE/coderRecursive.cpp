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
Node*BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node*temp=new Node(x);

    //Left side create..
    cout<<"Enter the left child of"<<x<<":";
    temp->left=BinaryTree();

    //Right side Create..
    cout<<"Enter the Right of"<<x<<":"; 
    temp->right=BinaryTree();
    return temp;
}
int main(){
   cout<<"Enter the root Node";
   Node*root;
   root=BinaryTree();
}
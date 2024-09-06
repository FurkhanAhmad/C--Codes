#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
 Node* Insert(Node*root,int target)
 {
    //Base case
    if(root==NULL)
    {
        Node*temp=new Node(target);
        return temp;
    }
    if(target<root->data)
    root->left=Insert(root->left,target);
    else
    root->right=Insert(root->right,target);
    return root;
 }
    bool Search(Node*root,int target)
    {
        if(root==NULL)
        return 0;
        if(root->data==target)
        return 1;
        if(root->data>target)
        {
            return Search(root->left,target);
        }
        else
        return Search(root->right,target);
    }
int main(){
    int arr[]={6,3,17,5,11,18,2,1,20,14};
    Node *root=NULL;
    for(int i=0;i<10;i++)
    root=Insert(root,arr[i]);
    cout<<Search(root,11)<<endl;
}

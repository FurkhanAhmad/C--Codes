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
// void PreOrder(Node* root)
// {
//     if(root==NULL)
//     return;
//     //
//     cout<<root->data<<" ";
//     //left
//     PreOrder(root->left);
//     PreOrder(root->right);

// }
// void InOrder(Node*root)
// {
//     if(root==NULL) return;
//     InOrder(root->left);
//     cout<<root->data<<" ";
//     InOrder(root->right);

// }
// void PostOrder(Node *root)
// {
//     if(root==NULL) return;
//     PostOrder(root->left);

//     PostOrder(root->right);
//    cout<<root->data<<" ";
// }
// void levelOrder(Node* root)
// {
//    int size=0;
//     queue<Node*>q;
//     q.push(root);
//     // vector<int>ans;
//     Node*temp;
//     while(!q.empty())
//     {
      
//         temp=q.front();
//         q.pop();
//         // ans.push_back(temp->data);
//         cout<<temp->data<<" ";
//        size++;
//         //if left side is extist
//         if(temp->left)
//         q.push(temp->left);//push address in temp->left
        
//         //if Right side is exist
//         if(temp->right)   //push address in temp->right;
//         q.push(temp->right);
//     }
   
// }
// int count=0;
void total(Node*root,int &count){
    if(root==NULL){
    return;
    }
    count++;
    total(root->left, count);
    total(root->right,count);
    // cout<<count;
    // return count;
}
int getSize(Node*root)
{
    int count=0;
    total(root,count);
    return count;
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
//    cout<<"preorder:"<<endl;
//    PreOrder(root);

//    cout<<"Inorder:"<<endl;
 
//    InOrder(root);

//    cout<<"PostOrder:"<<endl;
//    PostOrder(root);
 
//  cout<<"level Order Traversal"<<endl;
// levelOrder(root);


cout<<endl;

cout<<"sizeOf Tree:"<<getSize(root);
// cout<<count<<endl;
}
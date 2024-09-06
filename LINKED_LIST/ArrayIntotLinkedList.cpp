#include<iostream>
#include<list>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    Node *Head;
    Head=NULL;
   
 
    //Insert the at begining
     int arr[]={2,4,6,8,10};

     for(int i=0;i<5;i++)
     {
        if(Head==NULL){
            Head=new Node(arr[i]);
    }
    else
    {
        Node *temp;
        temp =new Node(arr[i]);
        temp->next=Head;
     
        Head=temp; 
    }
}

//Print the value..;
Node *temp=Head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}
}

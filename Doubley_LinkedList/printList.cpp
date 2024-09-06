#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*pre;
   
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void display(Node*head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}


void displayrecursive(Node*tail){
    while(tail){
        cout<<tail->val<<" "; //O(1) Space..
        tail=tail->pre;
    }
}

int main(){
    Node*a=new Node(10);
    Node*b=new Node(20);
    Node*c=new Node(30);
    Node*d=new Node(40);
    Node*e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->pre=d;
    d->pre=c;
    c->pre=b;
    b->pre=a;
    display(a);
    displayrecursive(e); 
  
}
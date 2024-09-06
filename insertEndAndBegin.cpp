#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtBegin(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            insertAtBegin(val);
        else if (idx == size)
            insertAtEnd(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtBegin()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
    }
    void deleteAtEnd()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid Index";
        }
        else if (idx == 0)
            return deleteAtBegin();
        else if (idx == size - 1)
            return deleteAtEnd();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtBegin(5);
    ll.display();
    ll.insertAtIdx(4, 80);
    ll.display();
    ll.deleteAtBegin();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}
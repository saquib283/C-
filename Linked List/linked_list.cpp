#include <iostream>
using namespace std;
class node
{

public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head , int val){
    node*n=new node(val);
    node* temp=head;
    if (head==NULL)
    {
        head=n;
    }
    
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(node*head){
    node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data;
    }
    cout<<endl;
    
}
int main()
{
    node * head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,8);
    insertAtTail(head,7);
    insertAtTail(head,9);
    insertAtTail(head,6);
    insertAtTail(head,3);

    display(head);

    return 0;
}
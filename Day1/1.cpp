#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head,int data){
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;
}
void printNode(Node *&head){
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int sizeofLL(Node* &head){
    int count=0;
    Node * temp=head;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Node *newNode=new Node(10);
    insertAtHead(newNode,20);
    insertAtHead(newNode,30);
    insertAtHead(newNode,40);
    printNode(newNode);
    cout<<sizeofLL(newNode);

    return 0;
}
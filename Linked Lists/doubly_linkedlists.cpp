#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtbeg(Node *&head, int d)
{

    Node *temp = new Node(d);
    // making connections
    temp->next = head;
    head->prev = temp;
    // update head
    head = temp;
}
void insertAtEnd(Node *&head, int d)
{
    Node *temp = new Node(d);
    Node *tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;
    temp->prev = tp;
}
void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtpos(Node* head,int d,int pos){
    Node* newNode = new Node(d);
    Node* temp = head;
    Node* temp2;
    while(pos!=1){
        temp = temp->next;
        pos--;
    }
    temp2 = temp->next;
    // make connections
    newNode->next = temp2;
    temp2->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;

    // we can also write like this

    // temp->next = newNode;
    // temp2->prev = newNode;
    // newNode->next = temp2;
    // newNode->prev = temp;
}

int main()
{

    Node *b = new Node(4);
    Node *head = b;
    // Node* tail = b;

    // insertAtbeg(head,5);
    // insertAtbeg(head,7);
    // insertAtbeg(head,8);
    // insertAtbeg(head,9);
    // traverse(head);
    // cout << endl;
    insertAtEnd(head, 5);
    insertAtEnd(head, 7);
    insertAtEnd(head, 8);
    insertAtEnd(head, 9);
    traverse(head);
    cout<<endl;

    insertAtpos(head,10,5);
    traverse(head);



    return 0;
}

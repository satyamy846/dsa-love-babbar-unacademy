#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*next;
        Node(){

        }

        Node(int d){
            this->data = d;
            this->next = NULL;
        }
   

};

// void insertAthead(Node* &head,int d){
//     //Create new node
//     Node*temp = new Node(5);
//     //next ptr to head node
//     temp->next = head;
//     //update new head
//     temp = head;

// }
// void traverse(Node* &head){
//     //store head somewhere
//     Node*temp = head;
//     while(temp!=NULL){
//         //print temp data
//         cout<<temp->data<<" ";
//         //increment temp
//         temp = temp->next;
//     }
//     cout<<endl;
// }
void traverse(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    //Creation of new node
    Node* temp = new Node(d);
    //adding to the node
    tail->next = temp;
    //updating the tail
    tail = temp;
}

// void traverse(Node* &tail){
//     Node*temp = tail;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }
//     cout<<endl;
// }



int main(){
    //static allocation
    // Node a;
    // cout<<a.data<<endl;
    // cout<<a.next<<endl;
    // Node* first = new Node(4); // dynamically allocation
    // cout<<first->data<<endl;
    // cout<<first->next<<endl;
    
    // Node obj(4); //static allocation
    // cout<<obj.data<<endl;
    // cout<<obj.next<<endl;

    // Node* a = new Node(4);
    // Node*head = a;
    Node* b = new Node(4);
    Node* tail = b;
    // insertAthead(head,12);
    // insertAthead(head,8);
    // insertAthead(head,7);
    // insertAthead(head,5);
    // insertAthead(head,4);

    insertAtTail(tail,12);
    insertAtTail(tail,8);
    insertAtTail(tail,7);
    insertAtTail(tail,5);
    insertAtTail(tail,4);

    traverse(tail);

return 0;
}
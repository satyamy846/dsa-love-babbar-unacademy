#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        Node(int deta){
            this->data = deta;
            this->next = NULL;
        }
};
int getlength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAthead(Node* &head,int d){
    //step1 create newnode
    Node* temp = new Node(d);
    //step2 temp ko head se point kra do
    temp->next = head;
    //step3 update head
    head = temp;

}


void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next =temp;
    tail = temp;
}

void insertAtPos(Node* &head,int pos,int d){

    if(pos == 1){
        insertAthead(head,d);
    }
    else{
        //creation of new node
        Node* newNode = new Node(d);
        //creaction of new pointer for traversal
        Node* prev = head;
        //this is used to traverse the whole linked lists
        int t = pos-2;

        while(t--){
            prev = prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }

}

void deletenode(Node* &head,int target,int pos){
    Node* temp = head;
    Node* prev = NULL;

    if(pos == 1 && target == temp->data){
        //make connection with next
        head = head->next;
        //disconnection of deleting node
        temp->next = NULL;
        delete temp;
    }

    else{
        //we are inserting at middle of LL
        while(target!=temp->data){
            //update previous prev and temp
            prev = temp;
            temp = temp->next;
        }
        //making connection
        prev->next = temp->next;
        //disconnection of deleting node
        temp->next = NULL;
        delete temp;
    }
}

void traverse(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // cout<<endl;
}

int main(){
    // Node *node1 = new Node(5);
    Node* b= new Node(3);
    Node* head = b;
    Node* tail = b;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // insertAthead(head,5);
    // insertAthead(head,7);
    // insertAthead(head,9);
    // insertAthead(head,11);
    // insertAthead(head,15);

    insertAttail(tail,5);
    insertAttail(tail,7);
    insertAttail(tail,9);
    insertAttail(tail,11);
    insertAttail(tail,15);

    traverse(head);
    cout<<endl;
    // insertAtPos(head,2,13);
    // traverse(head);
    cout<<getlength(head)<<endl;
    // deletenode(head,11,1);
    // traverse(head);

    return 0;
}
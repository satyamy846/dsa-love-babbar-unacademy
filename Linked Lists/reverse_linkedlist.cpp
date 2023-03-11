#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

void insertAttail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next =temp;
    tail = temp;
}

Node* reverse(Node* &head){
    //reverse the linked list using iterative approach
    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* recursiveRev(Node* & curr,Node* &prev){

    //reverse the linkded lists using recursive approach
    if(curr == NULL){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;

    return recursiveRev(forward,curr);


}
Node* middleEle(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next!=NULL){
        //slow ko 1 step
        slow = slow->next;

        fast = fast->next->next;
    }
    return slow;

}


bool iscircular(Node* head){
    Node* temp = head;

    while(temp!=NULL){

        if(temp->next == head){
            return true;
        }
        temp = temp->next;
    }
    return false;

}

Node* reverseKNode(Node* &head,int k){

    if(head == NULL){
        cout<<"List is emypty"<<endl;
        return NULL;
    }

    // revese k nodes
    Node* curr = head;
    Node* Next = NULL;
    Node* prev = NULL;
    int count = 0;
    while(curr!= NULL && count<k){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
        count++;
    }

    if(Next!= NULL){
        //valid linked list
        head->next = reverseKNode(Next,k);
    }
    return prev;
}

// Node* sort012(Node* &head){

//     Node* dummy1 = new Node(-1);
//     Node* dummy2 = new Node(-1);
//     Node* dummy3 = new Node(-1);

//     Node* temp = head;
//     while(temp!=NULL){
//         if(temp->data == 0){
//             temp->next = dummy1;
//         }
//         if(temp->data == 1){
//             temp->next = dummy2;
//         }
//         if(temp->data == 2){
//             temp->next = dummy3;
//         }
//     }
// }

int countKnode(Node* &head,int k){

    //Recursive Approach
    //Base case
    if(head == NULL){
        return 0;
    }

    int count = countKnode(head->next,k) + 1;

    if(count == k){
        cout<<"Kth node from the last is- "<<head->data<<" "; 
    }

    return count;
}

Node* detectLoop(Node* &head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!= NULL && fast->next!= NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}

bool detectDeleteLoop(Node* &head){

    if(head == NULL){
        return false;
    }
    //store the fast position where fast and slow meets
    Node* fast = detectLoop(head);

    Node* slow = head;
    while(fast == NULL && fast->next == NULL){
        slow = slow->next;
        fast = fast->next;
    }
    //loop ends mtlb slow or fast ka milan
    Node* begNode = fast;
    Node* temp = begNode;

    while(temp!= begNode){
        temp= temp->next;
    }
    temp->next = NULL;
    return true;
}


void traverse(Node* &head){

    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main(){

    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;
    insertAttail(tail,5);
    insertAttail(tail,7);
    insertAttail(tail,9);
    Node* temp = tail;
    insertAttail(tail,11);
    insertAttail(tail,13);
    insertAttail(tail,15);
    tail->next = temp;
    // cout<<"Printing the linked lists-: "<<" ";
    // traverse(head);
    // cout<<endl;

    // if(detectLoop(head)){
    //     cout<<"Yes there is loop"<<endl;
    // }
    // else{
    //     cout<<"No there is no loop"<<endl;
    // }
    // traverse(head);
    cout<<detectDeleteLoop(head)<<endl;
    traverse(head);

    // // head = reverse(head);
    // // traverse(head);
    // // Node* prev = NULL;
    // // head = recursiveRev(head,prev);
    // // traverse(head);
    // Node* ans = middleEle(head);
    // cout<<"middle element is "<<ans->data<<endl;
    // //to make LL circular
    // head->next = head;
    // cout<<iscircular(head)<<endl;

    // head = reverseKNode(head,3);
    // traverse(head);
    // cout<<endl;

    // countKnode(head,2);
return 0;
}
// #include<iostream>
// using namespace std;

// class Queue{

//     public:
//         int *arr;
//         int front;
//         int rear;
//         int size;

//         Queue(int n){
//             arr = new int(n);
//             rear = 0;
//             front = 0;
//             size = n;

//         }

//         void push(int element){

//             if(rear == size){
//                 cout<<"Overflow hogya"<<endl;
//                 return;
//             }
//             else{
//                 arr[rear] = element;
//                 rear++;
//             }
//         }

//         void pop(){
//             if(front == rear){
//                 cout<<"Underflow hogya"<<endl;
//                 return;
//             }
//             else{
//                 arr[front] = -1;
//                 front++;
//                 //do this to do not waste extra memory
//                 if(front == rear){
//                     front = rear = 0;
//                 }
//             }
//         }

//         bool isempty(){
//             if(front == rear){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

//         int getfront(){

//             if(front == rear){
//                 return -1;
//             }
//             else{
//                 return arr[front];
//             }

//         }


// };

// int main(){

//     Queue* q = new Queue(5);

//     q->push(3);
//     q->push(7);
//     q->push(9);
//     q->push(11);
//     q->push(12);

//     cout<<"front element is "<<q->getfront()<<endl;
//     q->pop();
//     cout<<"front element is "<<q->getfront()<<endl;
//     while(!q->isempty()){
//         cout<<q->getfront()<<" ";
//         q->pop();
//     }
//     cout<<endl;


// return 0;
// }

#include <iostream>
#include <queue>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    CircularQueue(int n)
    {
        arr = new int(n);
        front = -1;
        rear = -1;
        size = n;
    }

    void engueue(int element)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size))
        {
            cout << "Overflow" << endl;
            cout<<"Chal rha "<<endl;
    
        }
        else if (front == -1)
        {
            front = rear = 0;
            // arr[rear] = element;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            // arr[rear] = element;
        }
        else
        {
            rear++;
        }
        arr[rear] = element;
        cout<<arr[rear]<<endl;
        // cout<<arr[front]<<endl;
    }
    void dequeue()
    {
        if (front == -1 && rear == size - 1)
        {
            cout << "underflow" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }else{
            return false;
        }
    }
    int getFront(){
        if(front==-1){
            cout<<"mai hu"<<endl;
            return -1;

        }
        else{
            cout<<" arr[front] "<<arr[front]<<endl; 
            cout<<"front "<<front<<endl;
            return arr[front];
        }
    }
};

int main()
{

    CircularQueue *q = new CircularQueue(5);
    q->engueue(3);
    q->engueue(5);
    q->engueue(7);
    q->engueue(9);
    q->engueue(11);
    // q->engueue(3);
    // q-> dequeue();
    cout<<q->getFront()<<endl;


    // cout<<q->getFront();
}
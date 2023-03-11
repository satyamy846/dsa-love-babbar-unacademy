#include<iostream>
using namespace std;

class Queue{

    public:
        int *arr;
        int front;
        int rear;
        int size;

        Queue(int s){
            int *arr = new int(s);
            size = s;
            front = -1;
            rear = -1;
        }

        void enqueue(int element){
            
            //queue is full-> {front,...........,rear} {.......,rear,front,.........}
            if((front ==0 && rear == size-1) || (rear == (front-1)%size)){
                cout<<"Overflow hogya "<<endl;
                return;
            }
            //push single element
            else if(front == -1){
                front = rear = 0;
                // arr[rear] = element;
            }
            //circular insert  {....front,..........,rear} -> {rear,.......,front.......}
            else if(rear == size-1 && front!=0){
                rear = 0;
                // arr[rear] = element;
            }
            //Normally push the element
            else{
                rear++;
            }
            arr[rear] = element;


        }

        void dequeue(){

            //queue is empty
            if(front == -1){
                cout<<"Underflow hogya"<<endl;
                return;
            }
            //Single element case
            else if(front == rear){
                front = -1;
                rear = -1;
            }
            //pop in a circular way
            else if(front==size-1){
                front = 0;
            }
            //Normal vala case
            else{
                front++;
            }
            
        }

        bool isempty(){
            if(front==-1){
                return true;
            }
            else{
                return false;
            }
        }
        
        int getfront(){
            if(front == -1){
                return -1;
            }
            else{
                cout<<"front" <<arr[front]<<endl;
                return arr[front];
            }
        }

};

int main(){

    Queue* q = new Queue(5);

    q->enqueue(4);
    q->enqueue(6);
    q->enqueue(8);
    q->enqueue(10);
    q->enqueue(12);


    // cout<<"Before popping "<<endl;
    cout<<"front element is "<<q->getfront()<<endl;


    // q->dequeue();
    // cout<<"After popping"<<endl;
    // cout<<"front element is "<<q->getfront()<<endl;

return 0;
}
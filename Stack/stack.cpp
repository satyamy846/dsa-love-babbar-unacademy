#include<iostream>
#include<stack>
using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;

    //constructor
    Stack(int size){
        arr = new int(size);
        top = -1;
        this->size = size;
    }
    
    void push(int data){
        if(top == size-1){
            cout<<"Stack overflow for element "<<data<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }

    void pop(){
        if(top == -1){
        cout<<"Stack underflow for an element "<<endl;
        return;  
        }
        top--;
    }

    int getSize(){
        //it returns number of element present in stack
        return this->top+1;
    }
    
    int isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    int getTop(){
        if(top!= -1)
            return arr[top];
        else
            return -1;    
    }

    void printStack(){
        top++;
        cout<<arr[top]<<" ";
        pop();
    }
};

int main(){
    //Stack(5) represents the size of stack
    Stack* st = new Stack(6);
    st->push(8);
    st->push(7);
    st->push(6);
    st->push(2);
    st->push(3);
    st->push(4);
    cout<<st->getSize()<<endl;

    // cout<<st->getTop()<<endl;
    st->printStack();


return 0; 
}
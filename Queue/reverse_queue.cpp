#include<iostream>
#include<queue>
#include<stack>
using namespace std;



int main(){

    queue<int> q;
    stack<int> s;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(7);


    //Push the element from to stack
    while(!q.empty()){
        //element ko nikal lo
        int element  = q.front();
        //remove element from queue
        q.pop();

        s.push(element);
    }

    //vapis se stack se queue mae daal do
    while(!s.empty()){
        int element = s.top();
        s.pop();

        q.push(element);
    }

    cout<<"Printing the reversed element"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }




return 0;
}
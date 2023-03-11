#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st,int item){
    //base case  //item vo h jo hum paas krenge main fun mae insert krne k liye at the bottom of stack
    if(st.empty()){
        st.push(item);
        return;
    }
    //Step 1;
    int topElement = st.top();
    st.pop();

    //Step 2
    insertAtBottom(st,item);

    // Step 3
    st.push(topElement);

}

void reverse(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    //Step 1
    int topElement = st.top();
    st.pop();

    //Step 2
    reverse(st);

    // Step 3
    insertAtBottom(st, topElement);
}

int main(){
    stack<int> st;

    st.push(9);
    st.push(4);
    st.push(6);

    insertAtBottom(st,15);
    reverse(st);

    while(!st.empty()){
        cout<< st.top()<<endl;
        st.pop(); 
    }
return 0; 
}
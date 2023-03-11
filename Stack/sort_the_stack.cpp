#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &st,int data){

    if(st.empty() || st.top()<data){
        st.push(data);
        return;
    }

    int topEle = st.top();
    st.pop();

    //Recursive call
    sortedInsert(st,data);
    
    st.push(topEle);
}

void sort(stack<int> &st){
    //Base case
    if(st.empty()){
        return;
    }

    int topEle = st.top();
    st.pop();

    //Recursive call
    sort(st);

    //insert the desired element at their actual position
    sortedInsert(st,topEle);


}

int main(){

    stack<int> st;

    st.push(2);
    st.push(7);
    st.push(3);
    st.push(4);
    st.push(1);

    sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }



return 0;
}
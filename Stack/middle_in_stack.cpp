#include<iostream>
#include<stack>
using namespace std;

void printmiddle(stack<int>& st ,int totalsize){
    if((totalsize/2) + 1 == st.size()){
        cout<<"Middle element is "<<st.top();
        return;
    }

    //Step 1
    //Storing top element 
    int topelement = st.top();
    st.pop();

    //Step 2
    //Recursive call maar di
    printmiddle(st,totalsize);

    //Step 3
    st.push(topelement);
}

void insertAtbottom(stack<int> &st,int element){

    // Base case
    if(st.empty()){
        st.push(element);
        return;
    }

    //Step 2
    int topElement = st.top();
    st.pop();
    //step2
    insertAtbottom(st,element);

    //backtrack
    st.push(topElement);

    
}

void Reverse(stack<int> &st){

    if(st.empty()){
        return;
    }

    int topElement = st.top();
    st.pop();
    
    Reverse(st);
    // cout<<"topElement "<<topElement<<endl;

    insertAtbottom(st,topElement);
}

int main(){

    stack<int> st;
    st.push(8);
    st.push(3);
    st.push(5);
    st.push(4);
    st.push(7);

    // printmiddle(st,st.size());

    insertAtbottom(st,9);

    Reverse(st);
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


return 0;
}


// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){

//     stack<int> st;
//     int top = -1;

//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);
//     st.push(7);

//     //Finding middle element using iterative method
//     int mid = st.size()/2;

//     while(st.size()!=mid+1){
//         top++;
//         st.pop();
//     }
//     cout<<"middle element is "<<st.top()<<endl;

// return 0;
// }
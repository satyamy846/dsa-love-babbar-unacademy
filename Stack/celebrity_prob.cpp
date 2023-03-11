#include<iostream>
#include<stack>
using namespace std;

bool knows(int a,int b,int arr[4][4]){
    return arr[a][b];
}

int findCeleb(int arr[4][4],int n){

    stack<int> st;
    //Push all the elements to the stack
    for(int i=0;i<n;i++){
        st.push(i);
    }
    //find who is the celeb while checking every element if it is celeb or not with knows function
    while(st.size()>1){
        int first = st.top();
        st.pop();

        int second = st.top();
        st.pop();

        // cout<<"knows = "<<knows(first,second,arr)<<endl;
        
        if(knows(first,second,arr)){
            st.push(second);
        }
        else{
            st.push(first);
        }
        // cout<<"knows = "<<knows(first,second,arr)<<endl;
    }

    int celeb = st.top();

    bool checkRow = true;
    //verify the rows to check celeb is celebrity or not
    for(int i=0;i<n;i++){
        if(arr[celeb][i] == 1){
            checkRow = false;
            break;
        }
    }
    //check columns for all 1s except row == col
    bool checkCol = true;
    for(int i=0;i<n;i++){
        //i!= celeb -> isliye kyunki sb apne aapko toh jante hi honge toh intially 0 consider kiya h usko
        if(i!=celeb && arr[i][celeb] == 0){
            checkCol = false;
            break;
        }
    }

    //if verification succeeds,we found the celeb
    if(checkRow & checkCol){
        return celeb;
    }
    else
        return -1;
}

int main(){

    int arr[4][4] = {{0,0,1,0},
                     {0,0,1,0},
                     {0,0,0,0},
                     {0,0,1,0}};
    int n = 4;

    cout<<"celebrity is "<<findCeleb(arr,n)<<endl;

return 0;
}
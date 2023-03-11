#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// vector<int> nextsmallest(vector<int> &arr){
//     stack<int> st;
//     vector<int> ans;
//     st.push(-1);
//     for(int i=arr.size()-1;i>=0;i--){
//         int item = arr[i];
//         while(st.top()>=item){
//             st.pop();
//         }
//         ans[i] = st.top();
//         st.push(item);
//     }
//     return ans;
// }
vector<int> nextSmaller(vector<int> arr) {
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int item= arr[i];

        while(arr[s.top()] >= item) {
            s.pop();
        }

        //push in ans
        if(s.top() == -1)
            ans[i] = n;
        else 
            ans[i] = s.top();
       
        s.push(i);
    }
    return ans;
}

int main(){

    vector<int> arr;

    
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    // int n = arr.size();

    vector<int> next = nextSmaller(arr);

    for(int i=0;i<next.size();i++){
        cout<<next[i]<<" ";
    }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

return 0;
}
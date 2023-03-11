// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
    
//     int n;
//     cout<<"Enter no of element "<<endl;
//     cin>>n;
//     stack<int> st;
    
//     while(n--){
//         int t;
//         cin>>t;
//         st.push(t);
//     }

//     while(!st.empty()){
//         cout<< st.top() <<" ";
//         st.pop();
//     }
//     cout<< endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int arr[3] = {1,2,1};
    int sumeven =0;
    int i=0;  
    while(i<3){
        if(i%2==0){
            sumeven = arr[i++];
        }
          
        
    }
    cout<<sumeven<<endl; 
return 0;
}
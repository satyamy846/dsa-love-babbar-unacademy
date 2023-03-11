// vector<int> ans;
//             int i=0;
//             int j=0;
//             int k=0;
//             while(i<n1 && j<n2 && k<n3){
//                 if(A[i]==B[j] && B[j]==C[k]){
//                     ans.push_back(A[i]);
//                     i++;
//                     j++;
//                     k++;
                    
//                 }
//                 if(A[i]<B[j] && i<n1){
//                     i++;
//                 }
//                 if(B[j]<C[k] && j<n2){
//                     j++;
//                 }
//                 if(C[{
//                     k++;
//                 }
//             }
//             if(ans.size()==0){
//                 return -1;
//             }
//             return ans;


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int> mp;
            set<int> st(A,A+n1);
            set<int> st1(B,B+n2);
            set<int> st2(C,C+n3);

            for(auto it:st){
                mp[it]++;
            }
            for(auto it:st1){
                mp[it]++;
            }
            for(auto it:st2){
                mp[it]++;
            }
            
    vector<int> ans;

    for(auto &ele:mp){
        if(ele.second==3)  //it says checking second element is coming in all the three arrays or not
        ans.push_back(ele.first);
    }
    
    if(ans.size()==0)
    ans.push_back(-1);
    
    return ans;
    
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
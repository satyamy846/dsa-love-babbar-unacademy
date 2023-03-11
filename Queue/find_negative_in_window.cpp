#include<iostream>
#include<vector>
#include<Queue>
using namespace std;

vector<int> solve(vector<int> &v,vector<int> &ans,int k){

    //step 1
    queue<int> q;
    //step 2 
    for(int i=0;i<k;i++){
        if(v[i]<0){
            q.push(i);
        }
    }
    //step 3 store in ans
    if(q.size()>0){
        ans.push_back(v[q.front()]);
    }
    else{
        ans.push_back(0);
    }

    //step 4 process remaining elements

    for(int i=k;i<v.size();i++){
        //check the window
        if(i - q.front()>=k){
            //remove that element
            q.pop();
        }
        //push the new element which is negative for further preocessing
        if(v[i]<0)
            q.push(i);
        
        //store remaining element in ans
        if(q.size()>0){
            ans.push_back(v[q.front()]);
        }
        else{
            ans.push_back(0);
        }
    }

    return ans;
}

int main(){


    vector<int> v;
    int k = 2;
    v.push_back(-8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(-6);
    v.push_back(10);

    queue<int> q;
    vector<int> ans;
    solve(v,ans,k);

    
    cout<<"pprinting the element"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

return 0;
}
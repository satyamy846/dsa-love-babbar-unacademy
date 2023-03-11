#include<iostream>
#include<iomanip>
#include<set>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){

    //Parallel Road 
    int n1=2,n2=3;
    int arr1[]={2,3};
    int arr2[]={5,6,4};

    set<int, greater <int> > s;

    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(arr2[i]);
    }

    sort(s.begin(),s.end());

    int len=s.size();

    // if(len%2==0){
    //     //Even
    //     int val=len/2;
    //     float ans = ()/2;
    // }
    // else{
    //     //odd
    //     int output=s[len/2];
    //     cout<<fixed<<setprecision(2)<<
    // }

    // float x=2.2222;
    // cout<<fixed<<setprecision(2)<<x<<endl;

return 0;
}
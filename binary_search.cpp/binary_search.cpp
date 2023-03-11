#include<iostream>
#include<algorithm>
using namespace std;

bool search(int arr[],int n, int target){
    int s = 0,e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            
            return mid;
        }
        if(arr[mid]<target){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}

int main(){
    int n=6;
    int arr[6]={4,5,6,8,12,17};
    int target = 17;
    // if(search(arr,6,target)){
    //     cout<<"element found"<<endl;
    // }
    // else{
    //     cout<<"element not found"<<endl;
    // }
    cout<<binary_search(arr,arr+n,target); //inbuilt function

return 0;
}
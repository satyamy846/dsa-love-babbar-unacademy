#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int target){
    int s = 0,e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e = mid-1;
        }
        if(arr[mid]<target){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[8]={3,4,5,5,5,5,8,12};
    cout<<firstOcc(arr,8,5);
return 0;
}
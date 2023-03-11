#include<iostream>
using namespace std;

int seqlength(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        int left=i+1;
        if(left==n){
            break;
        }
        if(arr[left]>(arr[i]+arr[i+1])/2){
            return n;
            
        }
    }
}

int main(){
    int arr[6]={2,4,5,5,4,1};
    int n=6;

return 0;
}
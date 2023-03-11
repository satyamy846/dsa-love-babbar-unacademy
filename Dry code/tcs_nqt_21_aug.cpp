#include<iostream>
#include<algorithm>
using namespace std;

void subarray(int arr[],int n,int t){
    for(int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            // sum+=arr[j];
            if(sum==t){
                cout<<i<<" "<<j-1<<endl;
                // index2=j;
                return;
            }
            if(sum > t || j==n){
                break;
            }
            sum+=arr[j];
        }
    }
    cout<<"No subarray found"<<endl;
}

int main(){
    int arr[10]={5,3,7,14,18,1,18,4,8,3};
    int n=10;
    int target=15;
    
    subarray(arr,n,target);
return 0;
}
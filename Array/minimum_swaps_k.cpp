#include<iostream>
#include<algorithm>
using namespace std;

// int minswap(int arr[],int n,int k){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<=k){
//             count++;
//         }
//     }
//     //Creating first window
//     int bad = 0;
//     for(int i=0;i<count;i++){
//         if(arr[i]>k){
//             bad++;
//         }
//     }
//     int ans = bad;
//     //Creating next window
//     for(int i=0,j=count;j<n;i++,j++){
//         if(arr[i]>k){
//             bad--;
//         }
//         if(arr[i]>k){
//             bad++;
//         }
//         ans = min(ans,bad);
//     }
//     return ans;
// }

int main(){
    int arr[5]= {2,1,5,6,3};
    int n = 5;
    // cout<<"minimum no of swaps req :"<< minswap(arr,5,3)<<endl;
    int brr[6]={4,5,7,8,1,2};
    int m = 6;
    sort(arr,arr+n);
    sort(brr,brr+m);
return 0;
}
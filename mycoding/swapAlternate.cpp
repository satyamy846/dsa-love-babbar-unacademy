#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    for(int i=0; i<n-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[5]={-2,1,-4,5,3};
    swapAlternate(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
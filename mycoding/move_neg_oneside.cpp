#include<iostream>
using namespace std;

void moveNegative(int arr[],int n){
    int i =0,j=n-1;
    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[6]={-12,11,-13,-5,6,-7};
    int n =6;

    moveNegative(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
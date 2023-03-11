#include<iostream>
using namespace std;

bool find(int arr[][3],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==k){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[3][3];
    int n=3;
    //input
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int k =10;

    cout<<find(arr,n,k)<<endl;
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
return 0;
}
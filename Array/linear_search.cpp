#include<iostream>
using namespace std;

bool search(int arr[],int size,int target){
    for(int i=0; i<=size; i++){
        if(arr[i]==target){
            return true;
        }
        
    }
    return false;
}

int main(){
    int arr[100];
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    if(search(arr,5,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
return 0;
}
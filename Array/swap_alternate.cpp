#include<iostream>
using namespace std;

void swapAlt(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1<n){
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i] = temp;
        }
        i++;
    }
}

int main(){
    int arr[6] = {2,7,6,9,3,5};
    
    swapAlt(arr,6);
    //Printing the array
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
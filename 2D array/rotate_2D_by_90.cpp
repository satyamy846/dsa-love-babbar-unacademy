#include<iostream>
using namespace std;

void transpose(int arr[3][3],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void reverse(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        // reverse(arr.begin(),arr.end());
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    transpose(arr,3,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
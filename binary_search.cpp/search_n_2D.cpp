#include<iostream>
using namespace std;
bool search(int arr[][3],int n ,int m, int target){
    int s=0;
    int e =n-1;

    int mid = s+(e-s)/2;

    while(s<=e){
        //Check starting element of row
        if(arr[mid][0]==target){
            
            return true;
        }
        //Check ending element of row
        if(arr[mid][m-1]==target){
            return true;
        }
    }
}

int main(){
    int arr[3][3]={1,5,9,14,20,21,30,34,43};

return 0;
}
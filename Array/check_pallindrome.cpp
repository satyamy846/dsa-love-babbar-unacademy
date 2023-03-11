#include<iostream>
using namespace std;

bool pallindrome(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,3,2,1};
    cout<<pallindrome(arr,6)<<endl;
    
return 0;
}
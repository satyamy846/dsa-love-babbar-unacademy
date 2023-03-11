#include<iostream>
using namespace std;

int searchPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[s]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return arr[mid];
}

int main(){
    int n=5;
    int arr[]={30,40,50,10,20};
    int element = searchPivot(arr,n);
    cout<<element<<endl;
return 0;
}
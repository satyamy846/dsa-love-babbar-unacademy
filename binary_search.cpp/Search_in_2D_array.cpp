#include<iostream>
using namespace std;

bool binarySearch(int arr[][4],int n,int m,int row,int target){
    int s=0,e=m-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[row][mid]==target){
            cout<<row<<" "<<mid<<endl;
            return true;
        }
        if(arr[row][mid]>target){
            e =mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}

bool search(int arr[][4],int n, int m,int target){
    int s=0,e=n-1;
    int mid =s+(e-s)/2;
    while(s<=e){
        //Check starting element of row
        if(arr[mid][0] == target){
            cout<<mid<<" "<<0<<endl;
            return true;
        }

        //Check ending element of row
        if(arr[mid][m-1] == target){
            cout<<mid<<" "<<m-1<<endl;
            return true;
        }

        //Element in the middle of starting element and ending element
        if(arr[mid][0]<target && target<arr[mid][m-1]){
            
            bool ans = binarySearch(arr,n,m,mid,target);
            return ans;
        }
        
        //Upper part of row
        if(arr[mid][0]>target){ 
            e = mid-1;
        }

        //Lower part of the row
        if(arr[mid][m-1]<target){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}

int main(){
    // int arr[3][3]={1,5,9,14,20,23,30,34,43};
    int brr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,40}};
    int target = 7;
    int n=3,m=4;
    // cout<<search(arr,n,m,target)<<endl;
    cout<<search(brr,n,m,target)<<endl;
return 0;
}
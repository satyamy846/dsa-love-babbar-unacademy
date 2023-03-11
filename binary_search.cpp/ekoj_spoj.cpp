#include<iostream>
#include<algorithm>
using namespace std;

//Cut the Tree in such a way so that we could get max height of saw

bool isposibleSol(int arr[],int n,int mid,int target){
    int sum=0;
    for(int i=0;i<n;i++){
        int diff=0;
        if(arr[i]>mid){  //Tree(arr[i]) is greater than cut(mid) 
            diff = arr[i]-mid;
        }
        sum+=diff;
    }
    if(sum>=target){
        return true;
    }
    return false;
}

int getmaxheightofSaw(int arr[],int n,int target){
    sort(arr,arr+n); //To get max element which is the last element after sorting
    int s = 0;
    int e = arr[n-1];
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isposibleSol(arr,n,mid,target)){
            ans = mid;
            s = mid+1; //right coz we have to maxixmise the height
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[4]={15,8,18,6};
    int n=4,target=30;
    int ans=getmaxheightofSaw(arr,n,target);
    cout<<"maximum height is "<<ans<<endl;
return 0;
}
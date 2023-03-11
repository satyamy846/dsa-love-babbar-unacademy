// Online C++ compiler to run C++ program online
            
#include <iostream>
using namespace std;

bool binarySearch(int arr[][3], int n, int m, int row, int target)
{
    int s = 0;
    int e = m - 1;
    int mid = (s + (e - s) / 2);
    while (s <= e)
    {
        if (arr[row][mid] == target)
        {
            cout << row << " " << mid << endl;
            return true;
        }
        else if (arr[row][mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + (e - s) / 2);
    }
    return false;
}


bool search(int arr[][3],int n,int m,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if (arr[mid][0]==target){
            cout<<mid<<" "<<0<<endl;
            return true;
        }
        if(arr[mid][m-1]==target){
            cout<<mid<<" "<<m-1<<endl;
            return true;
            
        }
        if(arr[mid][0]<target && target<arr[mid][m-1]){
            bool ans= binarySearch(arr,n,m,mid,target);
            return ans;
        }

        if(target<arr[mid][0]){
            e=mid-1;
        }
        if(target>arr[mid][m-1]){
            s=mid+1;
        }
        mid= (s+(e-s)/2);
    }
    return false;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << search(arr, 3, 3,7);
    return 0;
}
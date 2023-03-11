#include<iostream>
using namespace std;

void rowSum(int arr[3][3],int row, int col){
    cout<<"printing sum"<<endl;
    int maxi =INT_MIN;
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        maxi=max(sum,maxi);
        cout<<sum<<" ";
        
        // cout<<"maximum sum"<<maxi<<endl;
    }
    cout<<endl;
    cout<<"maximum sum"<<" "<< maxi<<endl;

    // cout<<endl; 
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    rowSum(arr,3,3);
    //Printing array
    cout<<"Printing array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
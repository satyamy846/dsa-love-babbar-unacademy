#include<iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter row and column "<<endl;
    cin>>n>>m;

    //Creating 2D array
    int **arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[m];
    }

    cout<<"Enter the array elements "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // output
    cout<<"Printing an array"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;

return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int row =1; row<=n; row++){
        // Upper right half
        for(int col=1; col<=row; col++){
            //stars
            cout<< "*";
        }
        for(int col=1; col<=n-row+1; col++){
            //spaces
            cout<<" ";

        }
        cout<<endl;
    }
    for(int row =1; row<=n; row++){
        // Lower right half
        for(int col=1; col<=n-row+1; col++){
            //stars
            cout<< "*";
        }
        for(int col=1; col<=row; col++){
            //spaces
            cout<<" ";

        }
        cout<<endl;
    }
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    
    //Upper half solid diamond

    for(int row = 1; row<=n; row++){
        //Upper left half
        for(int col=1; col<=n-row+1; col++){
            //spaces
            cout<<" ";

        }
        for(int col=1; col<=row; col++){
            //stars
            cout<< "*";
        }
        // Upper right half
        for(int col=1; col<=row-1; col++){
            //stars
            cout<< "*";
        }
        for(int col=1; col<=n-row+1; col++){
            //spaces
            cout<<" ";

        }
    cout<<endl;
    }
    //Lower half solid diamond
    for(int row = 1; row<=n; row++){
        //Lower left half
        for(int col=1; col<=row; col++){
            //spaces
            cout<<" ";

        }
        for(int col=1; col<=n-row+1; col++){
            //stars
            cout<< "*";
        }
        // Lower right half
        for(int col=1; col<=n-row; col++){
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
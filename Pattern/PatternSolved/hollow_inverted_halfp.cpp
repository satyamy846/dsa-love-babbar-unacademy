#include<iostream>
using namespace std;

int main(){
    int n = 6;
    for(int row = 1; row<=n; row++){
        if(row == 1 || row == n){
            //printing star in first and last line
            for(int col =1; col<= n-row+1; col++){
                cout<< "*";
            }
        }
        else{//from 2nd row
            cout<< "*";
            for(int col = 1; col<=n-row-1; col++){
                //printing space
                cout<<" ";
            }
            cout<< "*";
        }
        cout<<endl;
    }
return 0;
}
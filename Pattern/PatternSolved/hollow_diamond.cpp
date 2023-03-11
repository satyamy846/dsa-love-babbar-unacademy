#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int row =1; row<=n; row++){
        //Upper half hollow diamond
        for(int col =1; col<=n; col++){
            if(col == n-row+1){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int col = 1; col<=n; col++){
            if(col == row-1){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }

        
        cout<<endl;
        
    }
    for(int row =1; row<=n; row++){
        //Lower half hollow diamond
        for(int col =1; col<=n; col++){
            if(col == row){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int col =1; col<=n; col++){
            if(col == n-row){
                cout<< "*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
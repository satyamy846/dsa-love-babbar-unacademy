#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int row =1; row<=n; row++){
        if(row ==1 || row == n){
            for(int col= 1; col<=n-row+1; col++){
            cout<<col;
            }
        
        }
        else{
            int num =5;
            
            
            for(int col = 1; col<=n-row+1; col++){
                cout<<" ";
            }
            cout<<num;
        }
        
        cout<<endl;
    }
return 0;
}
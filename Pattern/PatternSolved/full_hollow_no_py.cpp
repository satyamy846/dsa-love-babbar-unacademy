#include<iostream>
using namespace std;

int main(){
    int n =5;
    for(int row = 1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        if(row== 1 || row == n){
            for(int col =1; col<=row; col++){
                cout<<col<<" ";
            }
        }
        else{
            for(int col =1; col<=n; col++){
                if(col == n-row+1){
                    cout<<1;
                }
                
            }
            for(int col =1; col<=n; col++){
                if(col == row){
                    cout<<col<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }    
            
        cout<<endl;
    }
return 0;
}
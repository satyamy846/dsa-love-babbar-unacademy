#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n; col++){
            if(row=1 || col == row){
                cout<<col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}
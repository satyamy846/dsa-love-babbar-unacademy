#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=n; col++){
            if(row == col || row == n ||col == 1){
                //row = col -> diagonal element || row = n -> last row elements || col == 1 -> print 1st all the columns element
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
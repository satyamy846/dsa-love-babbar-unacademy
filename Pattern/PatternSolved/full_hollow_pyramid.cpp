#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int row =1; row<=n; row++){
        for(int col =1; col<=n-row; col++){
            //Spaces
            cout<<" ";
        }
        if(row == n|| row == 1){
            for(int col = 1; col<=row; col++){
                cout<<col<<" ";
            }
        }
        else{
            int num =1;
            cout<<num;
            for(int col = 1; col<=2*row-3; col++){
                cout<<" ";
            }
            cout<<row;
        }
        cout<<endl;
    }
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=1;i<=n;i++){

        int space = n-i+2;
        while(space--){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<"@";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"@";
        }
        
        cout<<endl;
        
    }
    for(int i=1;i<=n/2+1;i++){
        int space = n;
        while(space-- ){
            cout<<"p";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space2 = n;
        while(space2--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        
    
return 0;
}
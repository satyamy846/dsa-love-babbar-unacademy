#include<iostream>
using namespace std;

int main(){

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1    
    int n =5;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        int star = i-1;
        while(star--){
            cout<<"*";
        }
        star = i-1;
        while(star--){
            cout<<"*";
        }
        for(int j=n-i+1;j>=1;j--){
            cout<<j;
        }
        
        cout<<endl;
    }
return 0;
}
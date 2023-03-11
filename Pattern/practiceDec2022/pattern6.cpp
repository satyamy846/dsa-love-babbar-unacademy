#include<iostream>
using namespace std;

int main(){
// ****
// ***
// **
// *    
    // int n =4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int n = 4;
    for(int i=1;i<=n;i++){
        int space = i-1;
        while (space--)
        {
            cout<<" ";
        }
        
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}
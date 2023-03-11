#include<iostream>
using namespace std;

int main(){
//    1
//   22
//  333
// 4444    
    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     int space = n-i;
    //     while(space--){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


    // 1 2 3 4
    //   2 3 4
    //     3 4
    //       4

    // int n = 4;
    // for(int i=1;i<=n;i++){
    //     int space = i-1;
    //     while(space--){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<=n;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

//    1
//   23
//  456
// 78910

//    1 
//   2 3
//  4 5 6
// 7 8 9 10

    // int n = 4;
    // int ans = 1;
    // for(int i=1;i<=n;i++){
    //     int space = n-i;
    //     while(space--){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<ans<<" ";
    //         ans++;
    //     }
    //     cout<<endl;
    // }
    int n = 4;
    for(int i=1;i<=n;i++){
        int space = n-i;
        while(space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // space = n-i;
        // while(space--){
        //     cout<<" ";
        // }
        for(int j=1;j<=i-1;j++){
        cout<<j;
        }
        cout<<endl;

        
    }
    



return 0;
}
#include<iostream>
using namespace std;

int main(){

        // e
        // e
        // e
        // e
        // e
        // e
        // eeeeeee
        //       @
        //      @@
        //     @@@
        //    @@@@
        //   @@@@@
    int n;
    cin>>n;
    for(int i=1;i<=n+2;i++){
        for(int j=1;j<=n+2;j++){
            if( i==n+2 || j==1){
                cout<<"e";
            }
        }
        cout<<endl;
    }
    int space = n;
    for(int i=1;i<=n;i++){
        for(int j=n+1;j>=i;j--){
            cout<<" ";
        }
        
        for(int j=1;j<=i;j++){
            cout<<"@";
        }
        cout<<endl;
    }
return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=1;i<=n;i++){
        cout<<"@";
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++){
        int space = i*n;
        while(space--){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i==n){
            cout<<"@";
            cout<<endl;
            for(int i=1;i<=n;i++){
        
                cout<<"@";
                cout<<endl;
            }
        }
        
    
    }
    
    
    
    


return 0;
}
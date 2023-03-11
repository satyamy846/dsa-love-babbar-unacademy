#include<iostream>
using namespace std;

int main(){
    int n =7;
    int value =1;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=row; col++){
            cout<<value++<<" ";
        }
        cout<<endl;
    }
return 0;
}
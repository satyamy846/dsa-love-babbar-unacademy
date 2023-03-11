#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=n; i>0; i--){
        ans = ans *i;
    }
    return ans;
}

int main(){
    cout<<fact(5);
return 0;
}
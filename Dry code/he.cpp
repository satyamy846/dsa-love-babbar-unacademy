#include<limits.h>
#include<iostream>
using namespace std;

bool isPalindrome(int x) {
    if(x<0 || x>INT_MAX){
        return 0;
    }
    int n=x;
    double rev=0;
    while(n>0){
        if(n<10){
            rev=rev*10+n;
            break;
        }
        int rem=n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    // cout<<rev;
    if(rev==n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n=121;
    bool ans=isPalindrome(n);
    cout<<ans<<endl;

return 0;
}
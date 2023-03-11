#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    string s = "foobar";
    char letter = 'o';
        int len = s.length();
        int strcount=0;
        for(int i=0;i<len;i++){
            if(letter == s[i]){
                strcount++;
            }
        }
        int percen =strcount*100 /len;
        cout<<percen<<endl;
    
return 0;
}
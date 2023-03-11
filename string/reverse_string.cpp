#include<bits/stdc++.h>
using namespace std;

void reverse(char name[]){
    int length = strlen(name);
    int s=0,e=length-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int main(){
    char name[10]="LOVE";
    reverse(name);
    cout<<name<<endl;
return 0;
}
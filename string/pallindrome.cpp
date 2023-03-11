#include<iostream>
#include<string.h>
using namespace std;

char tolowercase(char ch){
    if(ch>='a'  && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool pallindrome(char name[],int n){
    int s=0,e= n-1;
    while(s<=e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"Enter the string "<<endl;
    cin>>name;
    int len = getlength(name);
    cout<<len<<endl;
    cout<<"Pallindrome or not "<<pallindrome(name,len)<<endl;
    return 0;
}


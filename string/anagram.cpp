#include<bits/stdc++.h>
using namespace std;

bool anagram(string c,string b){
    int freq[26]={0};
    for(int i=0;i<c.length();i++){
        char ch = c[i];
        int index = ch-'c';
        freq[index]++;
    }
    //Decrement
    for(int i=0;i<c.length();i++){
        char ch = c[i];
        int index = ch-'c';
        freq[index]--;
    }

    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    char c[10]="babbar";
    char b[10]="abbabr";

    cout<<anagram(c,b)<<endl;
return 0;
}



#include <string.h>
using namespace std;

bool checkAnagram(string a, string b)
{
    int freq[26] = {0};
    
    for (int i= 0; i < a.length(); i++){
        
        int index=a[i]-'a';
        freq[index]++;
    }

    for(int i=0;i<b.length();i++){
        
        int index=b[i]-'a';
        freq[index]--;
    }
    
    for(int i=0;i<26;i++){
        if(freq[i]!= 0){
            return false;
        }
        
        else{return "anagram";}
    }
    return true;
}

int main(){
    string a="babbar";
    string b="raabbb";
    cout<<"answer is "<<checkAnagram(a,b);
}
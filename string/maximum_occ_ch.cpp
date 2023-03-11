#include<iostream>
#include<string>
using namespace std;

//Count maximum occuring character
char getMaxOccCharacter(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        int number = 0;
        char ch = s[i];
        number = ch - 'a';
        arr[number]++;
    }

    //Find maximum occuring character 
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        
        if(maxi<arr[i]){
            ans =i;
            maxi = arr[i];
        }
    }
    return ans+'a';
}

int main(){
    char name [20];
    cin>>name;

    cout<<getMaxOccCharacter(name);

return 0;
}
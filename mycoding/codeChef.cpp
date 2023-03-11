#include<iostream>
using namespace std;

int main(){
    int candies,pocket,candieHold;
    cin>>candies;
    cin>>pocket;
    cin>>candieHold;
    int bag=1;
    int remaining=0;
    while(pocket--){
        remaining = candies-candieHold;
        if(remaining>candieHold){
            bag++;
        }
    }
    
    cout<<bag<<endl;
    return 0;
}
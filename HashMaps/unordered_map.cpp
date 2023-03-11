#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

int main(){

    unordered_map<string,int> mp;
    
    //first way to insert the data in map
    pair<string,int> p = make_pair("Satyam",2);
    mp.insert(p);

    //second way
    pair<string,int> p2 ("Hello",1);
    mp.insert(p2);

    //third way
    mp["Good"] = 1;


return 0;
}
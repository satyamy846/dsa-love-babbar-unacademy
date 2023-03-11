//Operator overloading link -> https://stackoverflow.com/questions/4421706/what-are-the-basic-rules-and-idioms-for-operator-overloading
// -> https://stackoverflow.com/questions/9351166/does-overloading-operator-works-inside-the-class

//Diff b/w encapsulation and abstraction ->https://stackoverflow.com/questions/15176356/difference-between-encapsulation-and-abstraction

#include<iostream>
using namespace std;

class Demo{
    public:
        int first=100;
        int second=120;
        // binary operator overloading
        Demo operator+(Demo& temp){
            Demo result;
            result.first = this->first + temp.first;
            result.second = this->second + temp.second;
            return result;
        
        }
        //Unary operator overloading
        void operator++ (){
            cout<<"runnig unary operator overloading"<<endl;
        }
};

class Human{
    public:
        int hands =5;
        int legs=10;
};
//Operator overloading <<(left shift ) outside the class
void operator<< (ostream& os,Human& obj){
    cout<<obj.hands<<endl;
    cout<<obj.legs<<endl;
}
int main(){

    // Demo obj1;
    // Demo obj2;

    // obj1 + obj2;

    Demo obj;
    // cout<<obj;

    // Human o;
    // cout<<o;

return 0;
}
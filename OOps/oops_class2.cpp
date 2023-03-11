#include<iostream>
using namespace std;

class Human{

    private:
        int age;
        string name;
        int weight;

    public:
        int getAge(){
            return this->age;
        }    

};

//Multilevel Inheritence
class Car{
    public:
        void print(){
        cout<<"I am car"<<endl;
        }
};

class Toyata:public Car{

};

class Fortuner:public Toyata{

};

// //Multiple Inheritence
// class Animal{

// };
// class Dog:public Animal,public Car{

// };

class Animal{
    public:
        int a;
        int b=3;

        //Function overloading
        int add(int a,int b){
            return a+b;
        }
        int add(int a,int b,int c){
            return a+b+c;
        }

        void speak(){
            cout<<" I speak"<<endl;
        }
};

class mammal:public Animal{
    public:
        //Method overriding (Runtime Polymorphism ) 
        //Basically changing the implementation of parent class function in derived class
        void speak(){
            cout<<"I do not speak I bark"<<endl;
        }
};

int main(){
    // Human obj;
    // obj.getAge();
    // obj.age;
    // obj.name;
    // obj.weight;

    // Car c;
    // c.print();
    Animal mam;
    mam.speak();    
return 0;
}
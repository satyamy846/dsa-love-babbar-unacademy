#include<iostream>
using namespace std;

// class encap{
//     private:
//         int x;
//     public:
//         int y=6;
//         void set(int a){
//             x = a;
//         }
//         int get(){
//             return x;
//         }
// };

// class Vehicle{
//     public:
//         void applybrakes(){
//             cout<<"Applying brakes"<<endl;
//         }
//         void fuelamount(){
//             int data = 200;
//         }
// };

// class car:public Vehicle{
//     public:

// };
class student{
    private:
        int rollno;
    public:
        student(){
            cout<<"Enter your roll no"<<endl;
            cin>>rollno;
        }
        void display(){
            cout<<"Your roll no is "<<rollno<<endl;
        }
};

class construct {
private:
    int a, b;
 
    // Default Constructor
    public:
    construct()
    {
        a = 10;
        b = 20;
    }
};

int main(){
    // encap obj;
    // cout<<obj.y<<endl;
    // obj.set(5);
    // cout<<obj.get()<<endl;

    // car obj;
    // obj.applybrakes();
    // obj.fuelamount();

    // student o;
    // o.display();

    construct c;
    cout << "a: " << c.a << endl << "b: " << c.b;
    // return 1;

return 0;
}
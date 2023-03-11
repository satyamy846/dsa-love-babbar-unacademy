#include<iostream>

using namespace std;

//base class
class Khaana{
    private:
        char gender;
    public:
        string name;
        int price;
        virtual void desert(){
            cout<<"GajarHalwa"<<endl;
        }
        Khaana(){
            gender = 'M';
        }
};

//Multiple Inheritence  { Khaana(base)}
                            //  |
        // Vegkhana(Derived Class)  NonVegKhana(derived class)


//derived class
class VegKhana:protected::Khaana{
    public:
        //paramertrised constructor
        VegKhana(string name,int price){
            this->name = name;
            this->price = price;
        }
        string vegStater = "Burger";

};  
//derived class
class NonVegKhana:public::Khaana{
    public:
        //default constructor
        NonVegKhana(){
            // cout<<"I am default constructor"<<endl;
        }
        //Parametarise constructor
        NonVegKhana(string name,int price){
            this->name = name;
            this->price = price;
        }
        // function overriding (Virtual Function) -> { Redefining the base class desert function}
        void desert(){
            cout<<"Rasagulla"<<endl;
        }
};

int main(){
    // Khaana *base_pointer;
    // Khaana base_obj;

    // NonVegKhana derived_obj;
    // base_pointer = &derived_obj;

    // base_pointer->name="burger";
    NonVegKhana *paraObj = new NonVegKhana("Mutton",250);
    cout<<paraObj->name<<endl;
    cout<<paraObj->price<<endl;

return 0;
}
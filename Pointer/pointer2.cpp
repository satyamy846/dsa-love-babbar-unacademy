#include<iostream>
using namespace std;

void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p)*(*p);
}

int main(){
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // // cout<<a<<endl; // value at a
    // // cout<<&a<<endl; // a ka address
    // // cout<<*a<<endl;  // error

    // // cout<<p<<endl;  //a ka address
    // // cout<<&p<<endl;  // p ka address
    // // cout<<*p<<endl;  // a ki value

    // cout<<q<<endl; //address of p
    // cout<<&q<<endl; // address of q
    // cout<<*q<<endl;  //address of a
    // cout<<**q<<endl; // value at a


    // float f= 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p; // value assign kr rhe h p ki jis value ko ptr point kr rha h

    // cout<<*ptr<<" "<<f<<" "<<p <<endl;

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout<<a<<" "<<b<<endl;


    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;


    // int a[] = {1,2,3,4};
    // int *pt = a++;
    // cout<<*pt<<endl;

    // int arr[] = {4,5,6,7};
    // int *p = (arr+1);
    // cout<<*arr+9 <<endl;

    int a = 10;
    square(&a);
    cout<<a<<endl;
return 0;
}
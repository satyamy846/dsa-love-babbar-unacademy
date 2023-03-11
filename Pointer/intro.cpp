#include<iostream>
using namespace std;

int main(){
    int *ptr = 0;
    // cout<<*ptr<<endl;
    // int a = 5;
    // int *p = &a;
    // cout<<*p<<endl;
    // int arr[5]={1,2,3,4,5};
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<*(arr+4)<<endl;
    // // cout<<*arr<<endl;
    // int i=0;

    // cout<<i[arr]<<endl;

    // char ch ='s';
    // char *p = &ch;
    // cout<<*p<<endl;


    // char ch[5]="abcd";
    // char *p = ch;
    // cout<<p<<endl;

    // char chari = 'a';
    // char *pt = &chari;
    // cout<<pt<<endl;  //Jab tk null character ni milega tb tk iterate krta jayega
    // cout<<*pt<<endl;


    // if(cout<<"satyam"){

    // }
    // else{

    // }

    // char sentence[]="My name is Babbar";
    // char *pt = sentence;

    // cout<<pt<<endl;
    // cout<<*pt<<endl;
    // cout<<&pt<<endl;

    int a = 10;
    int *pt = &a;
    int **p = &pt;
    cout<<"same as "<<*p<<endl;
    cout<<"Value stored at address p pointing to pt and pt is pointing to a "<<p<<endl;
    cout<<"adress of pt ->"<<**p<<endl;
    cout<<&p<<endl;
    cout<<"same as "<<*pt<<endl;
    cout<<&pt<<endl;
return 0;
}
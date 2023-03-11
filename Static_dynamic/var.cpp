// #include<iostream>
// using namespace std;

// int main(){
//     const int a= 5;
//     a++;
//     cout<<a<<endl;
// return 0;
// }

#include <iostream>
using namespace std;
  
int main()
{
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
  
    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    return 0;
}
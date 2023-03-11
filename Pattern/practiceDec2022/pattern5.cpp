// #include<iostream>
// using namespace std;

// int main(){
// ABC
// BCD
// CDE
//     int row = 3;
//     int col = 3;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             char ch = i+j +'A'-2;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// return 0;
// }

#include<iostream>
using namespace std;

int main(){
//   *
//  **
// ***
    int row = 3;
    int col = 3;
    for(int i=1;i<=row;i++){
        int space = row-i;
        while(space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


return 0;
}
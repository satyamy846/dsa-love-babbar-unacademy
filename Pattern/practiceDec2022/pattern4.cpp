#include<iostream>
using namespace std;

int main(){
/*AAA
  BBB
  CCC 
*/

// ABC
// ABC
// ABC    
    int row = 3;
    int col = 3;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            char ch = 'A'+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
return 0;
}
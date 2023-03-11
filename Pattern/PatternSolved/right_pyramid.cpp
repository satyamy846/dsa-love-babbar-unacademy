#include<iostream>
using namespace std;
/*  
      *
    * *
 *  * *
* * * * 
*/
int main(){
    int n = 4;
    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=n-row; col++){
            //Print space
            cout<<" ";
        }
        for(int col = 1; col<=row; col++){
            //Print stars
            cout<< "*";
        }
        cout<<endl;
    }
return 0;
}
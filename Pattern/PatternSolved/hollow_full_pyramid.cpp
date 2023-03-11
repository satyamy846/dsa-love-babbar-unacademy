#include<iostream>
using namespace std;

int main(){
//      *   
//     * *  
//    *   * 
//   *     *
//  *       *
// * * * * * *
    int n = 6;
    for(int row = 1; row<=n; row++){

        for(int col=1;col<=n-row;col++){
            //printing space to make star start from mid
            cout<<" ";
        }
        if(row == 1 || row == n){
            //first and last star
            for(int col = 1; col<= row; col++){
            cout<< "* ";
            }
        }
        else{
            //Gap in between star
            cout<< "*";
            for(int col =1; col<=(2*row)-3; col++){
                cout<<" ";
            }
            cout<< "*";
        }
        
        cout<<endl;
    }
return 0;
}
#include<iostream>
using namespace std;


void colSum(int arr[4][2], int row, int col){
    //column wise hi pehle chalenge naa
    for(int i=0; i<col; i++)
    {
    int sum = 0;
    //uske baad rowise value ko sum krte jayenge
        for(int j=0; j<row; j++)
    {
        sum = sum + arr[j][i];   
    }
    cout << sum << " ";

    }
    cout << endl;

}
int main(){
    int arr[4][2] = { {1,2}, {2,3}, {3,4}, {4,5} };
    colSum(arr,4,2);

return 0;
}
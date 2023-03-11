#include<iostream>
using namespace std;

int main(){
    int n=4,m=4;
    int arr[n][m]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int total=n*m;
    int startrow=0,startcol=0,endrow=n-1,endcol=m-1;

    while(total--){
        //First part
        for(int i=startcol;i<=endcol && total;i++){
            cout<<arr[startrow][i]<<" ";
        }
        
        startrow++;

        //Second part
        for(int i=startrow;i<=endrow && total;i++){
            cout<<arr[i][endcol]<<" ";
        }
        endcol--;

        //Third part
        for(int i=endcol;i>=startcol && total ;i--){
            cout<<arr[endrow][i]<<" ";
        }
        endrow--;

        //Fourth part
        for(int i=endrow;i>=startrow && total ;i--){
            cout<<arr[i][startcol]<<" ";
        }
        startcol++;
        // cout<<endl;
    }
return 0;
}
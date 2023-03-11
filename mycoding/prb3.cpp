#include<iostream>
using namespace std;

int main(){
    int row =2 ,col=4;
    int count1 =0,count2=0;
    int arr[2][4] = {{3,4,1,2},{1,2,4,3}};
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(i==1){
                //pair is increasing order
                if(arr[i]>arr[j]){
                    count1--; //incorrect order //Ex - 3,4
                }
                else{
                    count1++;//correct order //Ex - 1,2
                }
            }
            if(i==2){
                //pair is in decreasing order
                if(arr[i]>arr[j]){
                    count2++;  //incorrect order //Ex - 2,3
                }
                else{
                    count2--; //correct order //Ex - 4,3
                }
            }
        }
    }
    cout<<count1+count2<<endl;

return 0;
}
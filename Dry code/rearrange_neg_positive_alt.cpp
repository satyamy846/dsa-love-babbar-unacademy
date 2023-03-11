#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,-4,-1,4};

    for(int i=0; i<6; i++){
        if(i%2==0){
            //Even
            if(arr[i]>0){
                //even index is wrong place of +ve element
                int j=i;
                while(j<6 && arr[j]<0){
                    j++;
                }
                right_rotate(arr,6,i,j);
            }
        }
        else{
            //Odd
            if(arr[i]<0){
                //odd index is wrong place of -ve element
                int j=i;
                while(j<6 && arr[j]>0){
                    j++;
                }
                right_rotate(arr,6,i,j);
            }
        }
    }
return 0;
}
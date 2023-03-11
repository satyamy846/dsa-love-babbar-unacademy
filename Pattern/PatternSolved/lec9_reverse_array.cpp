// #include<iostream>
// using namespace std;
// int main(){
    
//     //using creation of a temp array




//     int arr[5],size,temp[6],count=5;
//     cin>>size;
//     //Inputing the array
//     for(int i=0;i<size;i++){
//         cout<<"Enter the elements"<<" ";
//         cin>>arr[i];
//     }
//     //Creating a temp array
//     for(int i=0;i<count;i++){
//         temp[i]=arr[i];
//     }
//     //Reversing the array element
//     for(int i=0;i<size;i++){
//         arr[i]=temp[count-1];
//         count--;
//     }
//     //Printing the reversed array
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0, end = 4;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={2,5,6,3,4};
    reverse(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}
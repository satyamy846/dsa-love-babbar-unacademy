// #include<iostream>
// using namespace std;

// int fixedValue(int arr[],int n){
//     int s =0,e=n-1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==mid){
//             return mid;
//         }
//         if(arr[mid]>mid){
//             //Left coz element is larger and index is smaller
//             e = mid-1;
//         }
//         else{
//             //Right
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[5]={-10, -5, 0, 3, 7};
//     int arr2[]={0, 2, 5, 8, 17};
//     cout<<"index is "<<fixedValue(arr,5)<<endl;
//     cout<<"index is "<<fixedValue(arr2,5)<<endl;
// return 0;
// }







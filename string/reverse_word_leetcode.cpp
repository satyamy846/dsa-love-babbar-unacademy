// #include<iostream>
// using namespace std;

// int main(){
//     class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(),s.end());
//         int i=0,k,j=0;        
//         while(i<=s.size()){
//             if(s[i]==' '||s[i]=='\0'){
//                 k=i-1;  
//                 while(j<k){
//                     swap(s[j++],s[k--]);
//                 }
//                 j=i+1;
//                 i++;    
//             }
//             i++;
//         }
//         i=0,j=0;
//         while(i<s.size()&&s[i]==' '){i++;} 
//         while(i<s.size()){
//             if((s[i]==' '&&s[i+1]==' ')||(s[i]==' '&&s[i+1]=='\0')){
//                 i++;
//             }
//             else{
//             s[j++]=s[i++];
//             }
            
//         }
        
//         s.resize(j);
        
//         return s;
//     }
    
// };
// return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
    
//     class Solution {
// public:
//     string reverseWords(string s) {
//         int i=0;
//         string result;
//         int n = s.length();
//         while(i<n){
//             while(i<n && s[i]== ' '){
//             i++;
//             }
//             if(i>=n) break;
//             int j =i+1;
//             while(j<n && s[j]!= ' '){
//                 j++;
//             }
//             string sub = s.substr(i,j-i);
//             if(result.length()==0)result = sub;
//             else result = sub + " "+result;
//             i = j+1;
//         }
        
//         return result;
//     }
// };
// return 0;
// }



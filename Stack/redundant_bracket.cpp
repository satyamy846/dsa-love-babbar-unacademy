#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string s) {

    stack<char> st;

    for(int i=0; i<s.length();i++) {

        char ch = s[i];
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if(ch == ')') {
            bool isRedundant = false;

            while(st.top() != '(') {
                char top = st.top();

                if(top == '+' || top == '-' || top == '*' || top == '/')
                    isRedundant = true;

                st.pop();
            }

            if(isRedundant == false)
                return true;
            st.pop();
        }
    }
    return false;
}

// bool checkRedundant(string s) {

//     stack<char> st;

//     for(int i=0; i<s.length();i++) {

//         char ch = s[i];
//         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch);
//         }
//         else if(ch == ')') {
//             bool isRedundant = true;

//             while(st.top() != '(') {
//                 char top = st.top();

//                 if(top == '+' || top == '-' || top == '*' || top == '/')
//                     isRedundant = false;

//                 st.pop();
//             }

//             if(isRedundant == true)
//                 return true;
//             st.pop();
//         }
//     }
//     return false;
// }

int main(){

    // string s= "((a+b))";
    // string s= "(a+b)";
    string s= "a+b*b)+(c)";
    if(checkRedundant(s)){
        cout<<"Redundant "<<endl;
    }
    else{
        cout<<"Not redundant"<<endl;
    }

return 0;
}
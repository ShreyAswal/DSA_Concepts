#include <iostream>
#include <stack>

using namespace std;

bool isOperand(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    string s;
    cin>>s;
    stack<string>st;
    st.push(s);
    // cout<<st.top();
    string infix = "";

    //postfix to infix
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
        if(isOperand(s[i])){
            st.push(to_string(s[i] - '0'));
            continue;
        } else {
            string second = st.top();
            st.pop();
            string first = st.top();
            st.pop();
            cout<<first<<" : "<<second<<" :: ";
            string newString = "("+first+s[i]+second+")";
            cout<<newString<<endl;
            st.push(newString);
        }
    }
    string ans = st.top();
    st.pop();
    cout<<"ans : "<<ans;
}
#include <iostream>
using namespace std;

class Stack{
    private:
    int size;
    int top;
    char* S;
    public:
    Stack(int size): size(size) ,top(-1), S(new char[size]) {};

    // Parenthesis matching problem
    bool MatchingParanthesis(string s){
        cout<<s<<"Size : "<<s.length()<<endl;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" "<<top<<endl;
            if(s[i] == '('){
                top++;
                S[top] = '(';
            }
            if(s[i] == ')'){
                top--;
            }
        }
        
        if(top == -1){
            return 1;
        } else {
            return 0;
        }
    };

};

int main(){

    string s;
    cin>>s;
    int size = s.length();

    Stack st1(size);

    bool isMatch = st1.MatchingParanthesis(s);
    cout<<isMatch<<endl;


};
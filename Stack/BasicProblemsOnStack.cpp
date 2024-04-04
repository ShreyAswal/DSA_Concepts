#include <iostream>
using namespace std;

class StackIntArr{
    private:
    int size;
    int top;
    char* S;
    public:
    StackIntArr(int size): size(size) ,top(-1), S(new char[size]) {};

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

struct Node{
    char data;
    Node* next;
};


class StackCharLL{
    private:
    Node* top;
    public:
    StackCharLL() : top(nullptr) {};
    void push(char x){
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    };

    char Pop(){
        char popped = ' ';
        if(top){
        Node* toDelete = top;
        popped = toDelete->data;
        top = top->next;
        delete toDelete;
        } else {
            cout<<"Stack Underflow\n";
            top = nullptr;
        }
        return popped;
    }

    int Top(){
        return top->data;
    };

    string Postfix(string s){
        string ps="";
        cout<<"Size: "<<s.size()<<endl;
        int i=0,l=s.size();

        while(i < l){
            if(isOperand(s[i])) {ps+=s[i]; i++;continue;} 
            else {
                if(top == nullptr){
                    push(s[i]);
                    i++;
                } else if(top && Precedence(s[i]) > Precedence(top->data)){
                    push(s[i]);
                    i++;
                } else {
                    ps+=top->data;
                    Pop();
                }
            }
            cout<<i<<" : "<<ps<<endl;
        }
        while(top != nullptr){
            ps += top->data;
            Pop();
        }
        return ps;
    };

    bool isOperand(char ch){
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            return false;
        } else {
            return true;
        }
    };

    int Precedence(char c){
        if(c == '+' || c == '-') return 1;
        if(c == '*' || c == '/') return 2;
        return 0;
    }

    void Display(){
        Node* n = top;
        while(n != nullptr){
            cout<<n->data<<" ";
            n = n->next;
        }
        cout<<endl;
    };
};

int main(){

    string s;
    getline(cin,s);
    // int size = s.length();

    // StackIntArr st1(size);

    // bool isMatch = st1.MatchingParanthesis(s);
    // cout<<isMatch<<endl;

    StackCharLL stll1;
    // for(int i=0;i<size;i++){
    //     stll1.push(s[i]);
    // }

    string Postfix = stll1.Postfix(s);
    cout<<"Postfix :"<<Postfix<<endl;

    stll1.Display();


};
#include <iostream>
using namespace std;

// Stack creation using array
class Stack
{
private:

    int size;
    int top;
    int *S;

public:
    Stack(int size);
    ~Stack(){
        delete[] S;
    };

    void Push(int x){

        if (IsFull()){
            cout << "Stack Overflow!"<<endl;
        } else {
            top = top + 1;
            S[top] = x;
        }  
    };

    int Top(){
        if(IsEmpty()) return -1;
        return S[top];
    };

    int Pop(){
        int popped = -1;
        if(IsEmpty()){
            cout<<"Stack is empty!"<<endl;
        } else {
            popped = S[top];
            top--;
        }
        return popped;
    };

    // Position starts from 1,2,3,4,....
    int Peek(int pos){
        int elementPeek = -1;
        if(top-pos+1 < 0 || top-pos+1 >= size){
            cout<<"Invalid Position!"<<endl;
        } else {
            elementPeek = S[top-pos+1];
        }
        return elementPeek;
    };

    bool IsFull(){
        if(top+1 == size){
            return 1;
        } else {
            return 0;
        }
    };

    bool IsEmpty(){
        if(top == -1){
            return 1;
        } else {
            return 0;
        }
    };

    void Display();
};

Stack::Stack(int size){
    this->size = size;
    top = -1;
    S = new int[size];
};

void Stack::Display(){
    for(int i=top;i >= 0; i--){
        cout<<S[i]<<" ";
    }
    cout<<endl;
};


int main(){
    int n;
    cin>>n;

    Stack s1(n);

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s1.Push(arr[i]);
    }

    // bool full = s1.IsFull();
    // if(full){cout<<"Stack is full!"<<endl;}
    // else {cout<<"Stack is not full!"<<endl;}
    // bool empty = s1.IsEmpty();
    // if(empty){ cout<<"Stack is empty!"<<endl;}
    // else{cout<<"Stack is not empty!"<<endl;}
    // int pop = s1.Pop();
    // cout<<pop<<endl;
    int top = s1.Top();
    cout<<top<<endl;
    s1.Display();
    int peekPos;
    cin>>peekPos;
    int peek = s1.Peek(peekPos);
    cout<<peek<<endl;
};
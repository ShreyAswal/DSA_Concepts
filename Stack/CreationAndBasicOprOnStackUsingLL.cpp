#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {} 
};

class LLStack{
private:
    Node* top;
public:
    LLStack(){top = nullptr;}

    void Push(int x){
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    };

    int Top(){
        if(top) return top->data;
        return -1;
    };

    int Pop(){
        int popped = -1;
        if(top){
            Node* temp = top;
            popped = temp->data;
            top = top->next;
            delete temp;
        }
        return popped;
    }

    int Peek(int pos){
        if(pos == 0) return -1; 
        Node* temp = top;
        for(int i=1;temp && i<pos;i++){
            temp = temp->next;
        }
        if(temp) return temp->data;
        return -1;

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
    int n;
    cin>>n;
    LLStack ls1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ls1.Push(arr[i]);
    }

    // ls1.Display();
    // int pop = ls1.Pop();
    // cout<<pop<<endl;
    // int top = ls1.Top();
    // cout<<top<<endl;
    int peekPos;
    cin>>peekPos;
    int peek = ls1.Peek(peekPos);
    cout<<peek<<endl;
    ls1.Display();

    return 0;

}
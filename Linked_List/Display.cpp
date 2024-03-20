#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = nullptr,*tail = nullptr;

void Display(Node* n){
    while(n != nullptr){
        cout<<n->data<<" ";
        n = n->next;
    }
};

void LinkedListLast(int x){
    Node *t = new Node;
    t->data = x;
    t->next = nullptr;
    if(head == nullptr){
        head = t;
        tail = t;
    } else {
        tail->next = t;
        tail = t;
    }
};

int main(){
    int n;
    cin>>n;

    for(int q=0;q<n;q++){
        int el;
        cin>>el;
        LinkedListLast(el);
    }
    Display(head);
    return 0;
};
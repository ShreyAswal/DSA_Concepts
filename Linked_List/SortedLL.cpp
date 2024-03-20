#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head = nullptr,*tail = nullptr;

void Display(Node *n){
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
        tail -> next = t;
        tail = t;
    }
};

void SortLL(Node *head){
    Node *p1 = new Node;
    Node *p2 = nullptr;
    p1 = head;
    p2 = p1->next;
    while(p1 != nullptr){
        // cout<<p1->data<<" : ";
        while(p2 != nullptr){
            if(p1->data > p2->data){
                int val = p1->data;
                p1->data = p2->data;
                p2->data = val;
            }
            // cout<<p2->data<<" ";
            p2 = p2->next;
        }
        // cout<<endl;
        if(p1->next->next == nullptr){
            break;
        } else {
            p1 = p1->next;
            p2 = p1->next;
        }
    }
    // cout<<endl;
};

void insertinLL(int x){
    
}

int main(){
    int n;
    cin>>n;
    for(int q=0;q<n;q++){
        int el;
        cin>>el;
        LinkedListLast(el);
    }
    Display(head);
    SortLL(head);
    cout<<endl<<"Sorted LL = ";
    
    Display(head);

    int insertEl;
    cin>>insertEl;
    cout<<insertEl;

    insertinLL(insertEl);

}
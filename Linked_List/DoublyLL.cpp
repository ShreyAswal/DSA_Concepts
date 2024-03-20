#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {};
};

struct Dnode{
    Dnode* prev;
    int data;
    Dnode* next;
    Dnode(int val) : prev(nullptr), data(val), next(nullptr) {};
};

class LinkedList{
    public:
    Dnode* head = nullptr,*tail = nullptr;
    LinkedList() : head(nullptr), tail(nullptr) {};

    void CreateDoublyLL(int val){
        Dnode* newNode = new Dnode(val);
        if(tail == nullptr){
            head = tail = newNode;
            head->next = tail->next = nullptr;
            head->prev = tail->prev = nullptr;
        } else {
            newNode->next = tail->next;
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    };

    void InsertInDLL(int pos,int val){
        
        Dnode* newDnode = new Dnode(val);
        if(pos == 1){
            newDnode->prev = nullptr;
            newDnode->next = head;
            head->prev = newDnode;
            head = newDnode;
        } else {
            Dnode* p = head;
            for(int i=1;i<pos-1;i++){
                p = p->next;
            }
            newDnode->next = p->next;
            newDnode->prev = p;
            if(p->next)
            p->next->prev = newDnode;
            p->next = newDnode;
        }
    };

    void Display(){
        Dnode* p = head;
        while(p != nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    };


};

int main(){
    int n;
    cin>>n;
    LinkedList l1;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        l1.CreateDoublyLL(el);
    }
    l1.Display();

    //Insert element in DLL
    int pos,val;
    cout<<"Enter pos and value of input element :\n";
    cin>>pos>>val;
    l1.InsertInDLL(pos,val);
        
    
    l1.Display();
};

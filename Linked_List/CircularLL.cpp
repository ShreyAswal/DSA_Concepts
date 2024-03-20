#include <iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList{
    public:
    Node* head = nullptr,*tail = nullptr;

    LinkedList() : head(nullptr), tail(nullptr) {};

    //Display Linear Linked List
    void Display(){
        Node* p = head;
        while(p != nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }
        cout<<endl;
    };


    //Display Circular Linked List
    void DisplayCLL(){
        Node* n = head;
        if(head == nullptr){
            cout<<"The LinkedList is empty!\n";
        }
        do{
            cout<<n->data<<" ";
            n = n->next;
        }while(n != head);
        cout<<endl;
    };

    //Create Linear Linked List
    void CreateLL(int val){
        Node* newNode = new Node(val);
        if(tail == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    //Create Circular Linked List
    void CreateCLL(int val){
        Node* newNode = new Node(val);
        if(tail == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;

        }
        tail->next = head;
    }

    //Insert Element in CLL at position
    void InsertCLL(int val,int pos);

    //Get length of the CLL
    int LengthCLL();

    //Delete a node from CLL with position
    void DeleteNodeCLL(int pos);
    
};

//Insertion in Circular Linked List
void LinkedList::InsertCLL(int val,int pos){
    Node* newNode = new Node(val),*p = head;
    int l = LengthCLL();
    if(pos < 1 || pos > l+1){
        return;
    }
    if(pos == 1){
        // cout<<head->data<<endl;
        if(head == nullptr){
            head = newNode;
            head->next = head;
        } else {
            while(p->next != head){
                // cout<<p->data;
                p = p->next;
            }
            p->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    } else {
        for(int i=1;i<pos-1;i++){
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
    }
};

void LinkedList::DeleteNodeCLL(int pos){
    int l = LengthCLL();
    if(pos < 1 || pos > l){
        return ;
    }
    Node* p = head;
    if(pos == 1){
        while(p->next != head){
            // cout<<p->data<<" ";
            p = p->next;
        }
        if(head == p){
            delete p;
            head = nullptr;
            // cout<<head<<endl;
        } else {
        Node* temp = head;
        // cout<<temp->data<<" : "<<head->data<<" ";
        p->next = head->next;
        head = head->next;
        // cout<<head->data<<endl;
        delete temp;
        // cout<<temp->data;
        }
    } else {
        for(int i=1; i<pos-1; i++){
            p = p->next;
        }
        Node* q = p->next;
        p->next = q->next;
        delete q;
    }
};

int LinkedList::LengthCLL(){
    int count=0;
    Node* n = head;
    do{
        count++;
        n = n->next;
    }while(n!=head);
    return count;
};

int main(){
    int n;
    cin>>n;
    LinkedList Cl1;
    for(int q=0;q<n;q++){
        int el;
        cin>>el;
        Cl1.CreateCLL(el);
    }

    Cl1.DisplayCLL();
    // Cl1.Display();
    // cout<<"Enter value of element to input:";
    // int val,pos;
    // cin>>val;
    // cout<<"\nEnter position of element to input:";
    // cin>>pos;
    // Cl1.InsertCLL(val,pos);
    // cout<<"After inserting into CLL :";
    // Cl1.DisplayCLL();
    // cout<<"Length of the LL :";
    // int len = Cl1.LengthCLL();
    // cout<<len<<endl;
    cout<<"Enter position to delete from CLL :";
    int delpos;
    cin>>delpos;
    Cl1.DeleteNodeCLL(delpos);
    Cl1.DisplayCLL();
}
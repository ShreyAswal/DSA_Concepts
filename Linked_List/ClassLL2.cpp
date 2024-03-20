#include <iostream>

using namespace std;

class LinkedList{
    private:
    struct Node{
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    Node* head = nullptr,*tail = nullptr;

    public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    ~LinkedList();

    void Display(){
        Node* p = head;
        while(p != nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }        
        cout<<endl;
    }

    void CreateLL(int val){
        Node* newNode = new Node(val);
        if(tail == nullptr){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void InsertElement(int val,int pos);
};

void LinkedList::InsertElement(int val,int pos){
    Node* newNode = new Node(val);
    Node* iterator = head;
    if(pos == 1){
        newNode->next = head;
        head = newNode;
    } else {
        for(int i=1;i<pos-1;i++){
            iterator = iterator->next;
        }
        newNode->next = iterator->next;
        iterator->next = newNode;
    }
};

int main(){
    int n;
    cout<<"Enter no of elements in LL :";
    cin>>n;
    LinkedList l1;
    for(int q=0;q<n;q++){
        int el;
        cin>>el;
        l1.CreateLL(el);
    }
    cout<<endl;
    l1.Display();
    LinkedList l2;
    l2.CreateLL(1);
    l2.CreateLL(13);
    l2.CreateLL(17);
    l2.CreateLL(31);

    l2.Display();

    l1.InsertElement(50,1);
    //After inserting we get the LL L1 as : 
    cout<<"After inserting we get the LL L1 as :\n";
    l1.Display();
}
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
    cout<<endl;
};

void CreateLL(int x){
    Node *t = new Node;
    t->data = x;
    t->next = nullptr;
    if(tail == nullptr){
        head = t;
        tail = t;
    } else {
        tail->next = t;
        tail = t;
    }
};

void SortInOrder(Node* head){
    Node* t1 = head;
    Node* t2 = t1;
    while(t1 != nullptr){
        while(t2 != nullptr){
            if(t2->data < t1->data){
                int x = t1->data;
                t1->data = t2->data;
                t2->data = x;
            }
            t2 = t2->next;
        }
        // cout<<t1->data<<" ";
        t1 = t1->next;
        if(t1->next == nullptr){
            break;
        } else {
        t2 = t1->next;
        }
    }
    t1 = head;    
};

void InsertEl(int x,int position){
    Node* t = new Node;
    Node *t2 = head;
    t->data = x;
    if(position == 1){
        t->next = head;
        head = t;
    } else {
        for(int i=1;i<position-1;i++){
            t2 = t2->next;
        }
        t->next = t2->next;
        t2->next = t;

    }
};

int DeleteEl(int pos){
    Node* prev,* curr;
    int x;
    if(pos == 1){
        x = head->data;
        prev = head;
        head = head->next;
        delete prev;
    } else {
        prev = nullptr;
        curr = head;
        for(int i=1;i<pos && curr;i++){
            prev = curr;
            curr = curr->next;
        }
        if(curr){
            prev->next = curr->next;
            x = curr->data;
            delete curr;
        } else {
            cout<<"Position exceeds size of Linked List\n";
            return -1;
        }
    }
    return x;
};

void IsSorted(Node* head){
    Node* curr = head;
    int x = INT16_MIN;
    while(curr != nullptr){
        // cout<<curr->data<<" : "<<x<<endl;
        if(curr->data < x){
            cout<<"Linked List is not Sorted!\n";
            break; 
        }
        x = curr->data;
        curr = curr->next;
    }
    if(curr == nullptr){
        cout<<"Linked List is Sorted!\n";
    }
};

void RemoveDuplicatesFromSortedLL(Node* head){
    Node* slow = head;
    Node* fast = slow->next;
    
    while(fast != nullptr){
        if(slow->data == fast->data){
            slow->next = fast->next;
            delete fast;
            fast = slow->next;
        } else {
            slow = slow->next;
            fast = slow->next;
        }
    }
};



int main(){
    int n;
    cin>>n;
    for(int q=0;q<n;q++){
        int el;
        cin>>el;
        CreateLL(el);
    }
    
    Display(head);
    SortInOrder(head);
    cout<<"end"<<endl;
    Display(head);
    // cout<<endl<<"Input the Element you want to insert and at which position starting from 1st?\n";
    // int addEl,posToAdd;
    // cin>>addEl>>posToAdd;
    
    // InsertEl(addEl,posToAdd);
    // cout<<"end"<<endl;
    // Display(head);
    // cout<<"Position to delete starting from 1st\n";
    // int posToDel;
    // cin>>posToDel;
    // int delEl = DeleteEl(posToDel);
    // cout<<"Element deleted had value = "<<delEl<<endl;
    // Display(head);
    cout<<"Checking if Linked List is sorted...\n";
    IsSorted(head);
    Display(head);
    cout<<"Removing all duplicate elements from Linked List...\n";
    RemoveDuplicatesFromSortedLL(head);
    Display(head);
}

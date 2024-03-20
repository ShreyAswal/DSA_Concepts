#include <iostream>
using namespace std;

class LinkedList{
    private:
    struct Node
    {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    Node* head;
    Node* tail;

    public:
    LinkedList() : head(nullptr), tail(nullptr) {}
    void insert_at_end(int val) {
        Node* newNode = new Node(val);
        if(tail == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void printList() {
        Node* current = head;
        while(current) {
            cout << current -> data << " -> ";
            current = current -> next;
        }
    }
    
};

int main() {
    LinkedList l1;
    l1.insert_at_end(5);
    
}
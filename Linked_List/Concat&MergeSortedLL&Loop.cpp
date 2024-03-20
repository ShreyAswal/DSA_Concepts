#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr, *tail = nullptr;
Node *head2 = nullptr, *tail2 = nullptr, *third = nullptr;

void Create(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    if (tail == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
};
void Create2(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = nullptr;
    if (tail2 == nullptr)
    {
        head2 = newNode;
        tail2 = newNode;
    }
    else
    {
        tail2->next = newNode;
        tail2 = newNode;
    }
};

void Display(Node *n)
{
    while (n != nullptr)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
};

void Concatenate(Node *first, Node *second)
{
    // third = first;
    // while (third->next != nullptr)
    // {
    //     // cout<<third->data<<" ";
    //     third = third->next;
    // }
    // // cout<<third->data<<endl;
    // third->next = second;
    // second = nullptr;
    // third = first;

    third = first;
    while(first->next != nullptr){
        first = first->next;

    }
    first->next = second;
};

void Merge(Node *first, Node *second)
{
    Node *last = nullptr;
    // cout << first->data << " : " << second->data << " :: ";

    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = nullptr;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = nullptr;
    }
    while (first != nullptr && second != nullptr)
    {
        // cout << first->data << " : " << second->data << endl;
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = nullptr;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = nullptr;
        }
    }
    if (first == nullptr)
    {
        last->next = second;
    }
    else
    {
        last->next = first;
    }
};

void isLoop(Node* start){
    Node* p,*q = start;
    while( p && q && p!= q){
        p = p->next;
        q = q->next;
        if(q != nullptr){
            q = q->next;
        }
    }
    if(p == q){
        cout<<"Is a Loop";

    } else {
        cout<<"Is not a Loop";
    }
};

int main()
{
    int n;
    cout << "Enter 1st Sorted LL's length: ";
    cin >> n;
    for (int q = 0; q < n; q++)
    {
        int el;
        cin >> el;
        Create(el);
    }
    // Display(head);
    // int n2;
    // cout << "Enter 2nd Sorted LL's length: ";
    // cin >> n2;
    // for (int q = 0; q < n2; q++)
    // {
    //     int el2;
    //     cin >> el2;
    //     Create2(el2);
    // }
    // Display(head2);
    // cout<<"Concatenating both we get: ";
    // Concatenate(head,head2);
    // Display(third);
    
    // Check Loop or not
    Node* t1,*t2;
    t1 = head;
    t2 = head->next->next;
    t2->next = t1;


    isLoop(head);

};
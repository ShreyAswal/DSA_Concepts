#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = nullptr, *tail = nullptr;

void CreateLL(int x)
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

void Display(Node *n)
{
    while (n != nullptr)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
};

void ReverseValuesLL(Node *head)
{
    vector<int> elements;
    Node *temp = head;
    int i = 0;
    // cout<<"here "<<temp->data<<" ";
    while (temp != nullptr)
    {
        elements.push_back(temp->data);
        // cout<<elements[i]<<" ";
        // cout<<temp->data<<" ";
        temp = temp->next;
        i++;
    }

    // cout<<endl;901
    temp = head;
    i--;
    while (temp != nullptr)
    {
        temp->data = elements[i];
        // cout<<temp->data<<" ";
        temp = temp->next;
        i--;
    }
};

void ReverseLinksLL(Node *first)
{
    Node *p = first, *q = nullptr, *r = nullptr;
    while (p != nullptr)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
        // cout<<q->data<<" ";
    }
    head = q;
};

void ReverseRecursionLL(Node *q, Node *p)
{
    if (p != nullptr)
    {
        ReverseRecursionLL(p, p->next);
        p->next = q;
    }
    else
    {
        head = q;
    }
};

int main()
{
    int n;
    cin >> n;
    for (int q = 0; q < n; q++)
    {
        int el;
        cin >> el;
        CreateLL(el);
    }
    Display(head);

    cout << "The reversed Links LL is :\n";
    ReverseLinksLL(head);
    Display(head);

    cout << "The recursive reversed LL is :\n";
    Node *prev = nullptr, *curr = head;
    ReverseRecursionLL(prev, curr);
    Display(head);
    
}
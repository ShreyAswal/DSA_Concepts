#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *p = &x;
    *p = 8;
    int **r = &p;
    int ***q = &r;


    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<r<<endl;  //Address of p =>     r = &p
    cout<<*r<<endl;  // Address of x =>  *r = p = &x
    cout<<**r<<endl; // Value of x =>   *(p) = x = 8
    cout<<&p<<endl;
    cout<<&r<<endl;
    cout<<q<<endl; // address of r => &r
    cout<<*q<<endl; // value at address r => &p
    cout<<**q<<endl; // value at address p => &x
    cout<<***q<<endl; // valuec at address x => 8
    return 0;
}

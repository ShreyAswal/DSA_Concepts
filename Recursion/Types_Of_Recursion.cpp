#include <iostream>

using namespace std;

class Recursion{
    public:
    Recursion(){};
    // Linear Recursion - A function that makes only a single call to itself.
    //Both the tail and head Recursion functions come under the Linear Recursion type.

    // Tail Recursion - All the code should execute before the recursive function all.
    //Nothing should be executed while returning.
    void tailRecursion(int n){
        if(n > 0){
            cout<<n<<" ";
            tailRecursion(n-1);
        }
    }

    // Head Recursion - All the code should execute during the returning phase.
    // Nothing should be executed in the calling phase ie the recursive function should be the first line of code inside the if condition.
    void headRecursion(int n){
        if(n>0){
            headRecursion(n-1);
            cout<<n<<" ";
        }
    };

    // Tree Recursion - A funciton that makes 2 or more calls to itself.
    void treeRecursion(int n){
        if(n>0){
            cout<<n<<" ";
            treeRecursion(n-1);
            treeRecursion(n-1);
        }
    }

    //Indirect Recursion - Multiple functions call each other recursively and form a cycle indirectly.
    // Eg: A -> B -> C -> A -> B -> C ... until a condition in any function is not met.
    void IndirectSubtractRecursion(int n){
        if(n>0){
            cout<<n<<" ";
            IndirectDivideRecursion(n-1);
        }
    }

    void IndirectDivideRecursion(int n){
        if(n>0){
            cout<<n<<" ";
            IndirectSubtractRecursion(n/2);
        }
    }

    // Nested Recursion - A function use's a nested function to call itself.
    // They expand a lotttt.
    int NestedRecursion(int n){
        if(n > 100){
            return n-10;
        }
        return NestedRecursion(NestedRecursion(n+11));
    }


};

int main(){
    int n;
    cin>>n;
    Recursion r1;
    r1.tailRecursion(n);
    cout<<endl;
    r1.headRecursion(n);
    cout<<endl;
    r1.treeRecursion(n); 
    cout<<endl;
    r1.IndirectSubtractRecursion(n);
    cout<<endl;
    const int recAns = r1.NestedRecursion(n);
    cout<<recAns<<endl;

    
};


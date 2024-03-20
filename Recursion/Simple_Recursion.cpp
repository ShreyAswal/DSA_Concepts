#include <iostream>

using namespace std;

// Recursion topic!

// When a function calls itself until a base condition is satisfied3
// Recursion function has a calling phase and returning phase

class Recursion
{
public:
    //Constructor
    Recursion(){};
    
    void CallingPrint(int n)
    {
        if (n > 0)
        {
            cout << n << " ";
            CallingPrint(n - 1);
        }
        cout<<endl;
    };

    void ReturningPrint(int n){
        if(n > 0){
            ReturningPrint(n-1);
            cout<<n<<" ";
        }
        cout<<endl;
    };
};

int main()
{
    int n;
    cin >> n;
    Recursion R1;

    // Printing at calling phase
    R1.CallingPrint(n);
    // Printing at returning phase
    R1.ReturningPrint(n);
};
#include <iostream>

using namespace std;

// Recursion topic!

// When a function calls itself until a base condition is satisfied
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

    //Here while returning and adding N the value of N is stored on the activation record of the function itself so it varies for each function.
    //Eg 5: 5=(4)+5 -> 4=(3)+4 -> 3=(2)+3 -> 2=(1)+2 -> 1=(0)+1 -> 0=0 ===> In Reverse order = (0)=0,(1)=1,(2)=3,(3)=6,(4)=10,(5)=15.Ans=15.
    int RecplusNRecursion(int n){
        if(n>0){
            return RecplusNRecursion(n-1)+n;
        }
        return 0;
    }

    int StaticVariableRecursion(int n){
        static int increment = 0;
        if(n>0){
            increment++;
            return StaticVariableRecursion(n-1)+increment;
        }
        return 0;
    }

    // Both the static variable and the global variable give the same answer as 
    // both of them store the variable in global scope instead of inside the activation record for each function/

    int globalVarIncrement = 0;
    int GlobalVariableRecursion(int n){
        if(n>0){
            globalVarIncrement++;
            return GlobalVariableRecursion(n-1)+globalVarIncrement;
        }
        return 0;
    }
};

int main()
{
    int n;
    cin >> n;
    Recursion R1;

    // Printing at calling phase
    // R1.CallingPrint(n);
    // Printing at returning phase
    // R1.ReturningPrint(n);
    // Recursion + value of n is being recursively called
    const int recplusN = R1.RecplusNRecursion(n);
    cout<<recplusN<<endl;
    // Adding static variable at returning phase to all funcitons created
    // const int staticAns = R1.StaticVariableRecursion(n);
    // cout<<staticAns<<endl;
    // Adding global scoped variable at returning phase to all funcitons created
    // const int globalAns = R1.GlobalVariableRecursion(n);
    // cout<<globalAns<<endl;
    


};
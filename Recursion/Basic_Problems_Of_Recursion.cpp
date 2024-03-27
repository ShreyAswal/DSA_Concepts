#include <iostream>

using namespace std;

class Recursion{
    public:
    Recursion(){}

    int SumRecursion(int n){
        if(n == 0){
            return 0;
        } else {
            return SumRecursion(n-1)+n;
        }
    }

    int sumIterative(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum += i;
        }
        return sum;
    }

    int factorialRecursion(int n){
        if(n==0){
            return 1;
        } else {
            return factorialRecursion(n-1)*n;
        }
    }

    int factorialIterative(int n){
        int factorial=1;
        for(int i=1;i<=n;i++){
            factorial *= i;
        }
        return factorial;
    }

    int powerRecursion(int n,int m){
        if(m == 0){
            return 1;
        } 
        return powerRecursion(n,m-1)*n;
    }
};

int main(){
    int n;
    cin>>n;
    Recursion r1;
    // const int sumRecursion = r1.SumRecursion(n);
    // cout<<sumRecursion<<endl;
    // const int sumIterative = r1.sumIterative(n);
    // cout<<sumIterative<<endl;
    // const int factorialRecursion = r1.factorialRecursion(n);
    // cout<<factorialRecursion<<endl;
    // const int factorialIterative = r1.factorialIterative(n);
    // cout<<factorialIterative<<endl;
    int m;
    cin>>m;
    const int powerRecursion = r1.powerRecursion(n,m);
    cout<<powerRecursion<<endl;
};
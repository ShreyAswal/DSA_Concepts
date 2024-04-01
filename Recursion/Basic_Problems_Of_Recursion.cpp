#include <iostream>

using namespace std;

class Recursion
{
public:
    Recursion() {}

    int SumRecursion(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            return SumRecursion(n - 1) + n;
        }
    }

    int sumIterative(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;
    }

    int factorialRecursion(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            return factorialRecursion(n - 1) * n;
        }
    }

    int factorialIterative(int n)
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }

    int powerRecursion(int n, int m)
    {
        if (m == 0)
            return 1;
        return powerRecursion(n, m - 1) * n;
    }
    int optimizedPowerRecursion(int n, int m)
    {
        if (m == 0)
            return 1;
        if (m % 2 == 0)
            return optimizedPowerRecursion(n * n, m / 2);
        return optimizedPowerRecursion(n * n, (m - 1) / 2) * n;
    }

    // Taylor Series - 1 + x/1 + x^2/2 + x^3/3 + x^4/4 ... n; x=power, n=no.of terms we want.
    double taylerSeries(int x, int n)
    {
        static double power = 1, factorial = 1;
        double result;
        if (n == 0)
            return 1;
        else
        {
            result = taylerSeries(x, n - 1);
            power = power * x;
            factorial = factorial * n;
            return result + power / factorial;
        }
    }

    int fibbonicciSeries(int n)
    {
        if (n <= 1)
            return n;
        return fibbonicciSeries(n - 1) + fibbonicciSeries(n - 2);
    }

    // nCr = n!/r!(n-r)!     1=factorial
    int pascalsTriangle(int n, int r)
    {
        if (r == 0 || r == n)
            return 1;
        return pascalsTriangle(n - 1, r - 1) + pascalsTriangle(n - 1, r);
    }
};

int main()
{
    // int n;
    // cin >> n;
    Recursion r1;
    // const int sumRecursion = r1.SumRecursion(n);
    // cout<<sumRecursion<<endl;
    // const int sumIterative = r1.sumIterative(n);
    // cout<<sumIterative<<endl;
    // const int factorialRecursion = r1.factorialRecursion(n);
    // cout<<factorialRecursion<<endl;
    // const int factorialIterative = r1.factorialIterative(n);
    // cout<<factorialIterative<<endl;
    // int m;
    // cin>>m;
    // const int powerRecursion = r1.powerRecursion(n,m);
    // cout<<powerRecursion<<endl;
    // const int optimizedPowerRecursion = r1.optimizedPowerRecursion(n,m);
    // cout<<optimizedPowerRecursion<<endl;
    // const double taylerSeries = r1.taylerSeries(n,m);
    // cout<<taylerSeries<<endl;
    const int fibbonicciSeries = r1.fibbonicciSeries(5);
    cout << fibbonicciSeries << endl;
    const int pascalsTriangle = r1.pascalsTriangle(5,3);
    cout << pascalsTriangle << endl;
};
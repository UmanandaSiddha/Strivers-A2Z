#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int fibLoop(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main()
{
    int num;
    cin >> num;

    int result1 = fib(num);
    cout << "Fibonacci: " << result1 << endl;

    return 0;
}
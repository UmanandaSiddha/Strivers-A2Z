#include<bits/stdc++.h>
using namespace std;

int factorialUsingLoop(int num) {
    int fact = 1;
    while (num > 0) {
        fact *= num;
        num--;
    }
    return fact;
}

int factorialUsingRecursion(int num) {
    if (num == 1) return 1;
    return num * factorialUsingRecursion(num - 1);
}

int main() {
    int num;
    cin >> num;

    int result1 = factorialUsingLoop(num);
    cout << "Factorial Using Loop: " << result1 << endl;

    int result2 = factorialUsingRecursion(num);
    cout << "Factorial Using Recursion: " << result2 << endl;

    return 0;
}
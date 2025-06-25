#include<bits/stdc++.h>
using namespace std;

int sumUsingLoop(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num;
        num--;
    }
    return sum;
}

int sumUsingRecursion(int num) {
    if (num < 1) return 0;
    return num + sumUsingRecursion(num - 1);
}

int sumOptimalApproach(int num) {
    return num * (num + 1) / 2;
}

int main() {
    int num;
    cin >> num;

    int result1 = sumUsingLoop(num);
    cout << "Sum Using Loop: " << result1 << endl;

    int result2 = sumUsingRecursion(num);
    cout << "Sum Using Recursion: " << result2 << endl;

    int result3 = sumOptimalApproach(num);
    cout << "Sum Using Optimal Approach: " << result3 << endl;

    return 0;
}
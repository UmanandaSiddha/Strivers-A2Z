#include<bits/stdc++.h>
using namespace std;

int bruteForce(int num1, int num2) {
    int mini = min(num1, num2);
    int hcf = 1;
    for(int i = 1; i <= mini; i++) if (num1 % i == 0 && num2 % i == 0) hcf = i;
    return hcf;
}

int betterApproach(int num1, int num2) {
    int mini = min(num1, num2);
    for(int i = mini; i >= 1; i--) if (num1 % i == 0 && num2 % i == 0) return i;
    return 1;
}

int evenBetterApproach(int num1, int num2) {
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    if (num2 == 0) return num1;
    return evenBetterApproach(num2, num1 - num2);
}

int optimalApproach(int num1, int num2) {
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    if (num2 == 0) return num1;
    return optimalApproach(num2, num1 % num2);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int result1 = bruteForce(num1, num2);
    cout << "Brute Force: " << result1 << endl;

    int result2 = betterApproach(num1, num2);
    cout << "Better Approach: " << result2 << endl;

    int result3 = evenBetterApproach(num1, num2);
    cout << "Even Better Approach: " << result3 << endl;

    int result4 = optimalApproach(num1, num2);
    cout << "Optimal Approach: " << result4 << endl;
    
    return 0;
}
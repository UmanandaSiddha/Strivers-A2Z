#include<bits/stdc++.h>
using namespace std;

bool bruteForce(int num) {
    int ori = num;
    int count = 0;
    vector<int> digits;
    int arm = 0;
    while (num > 0) {
        digits.push_back(num % 10);
        count++;
        num /= 10;
    }
    for (int i: digits) arm += static_cast<int>(round(pow(i, count)));
    if (ori == arm) return true;
    return false;
}

bool optimalApproach(int num) {
    int ori = num;
    int sum = 0;
    int count = (int)(log10(num)+1);
    while (num > 0) {
        sum += static_cast<int>(round(pow(num % 10, count)));
        num /= 10;
    }
    if (ori == sum) return true;
    return false;
}

int main() {
    int num;
    cin >> num;

    bool result1 = bruteForce(num);
    cout << "Brute Force: " << result1 << endl;

    bool result2 = optimalApproach(num);
    cout << "Optimal Approach: " << result2 << endl;
    
    return 0;
}
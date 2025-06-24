#include<bits/stdc++.h>
using namespace std;

bool bruteForce(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) if (num % i == 0) count++;
    if (count > 2) return false;
    return true;
}

bool optimalApproach(int num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            count++;
            if (i != (num / i)) count++;
        }
    }
    if (count > 2) return false;
    return true;
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
#include<bits/stdc++.h>
using namespace std;

vector<int> bruteForce(int num) {
    vector<int> divs;
    for (int i = 1; i <= num; i++) if (num % i == 0) divs.push_back(i);
    return divs;
}

vector<int> optimalApproach(int num) {
    vector<int> divs;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            divs.push_back(i);
            if (i != (num / i)) divs.push_back(num / i);
        }
    }
    return divs;
}

int main() {
    int num;
    cin >> num;

    vector<int> result1 = bruteForce(num);
    cout << "Brute Force: ";
    for (int i: result1) cout << i << " ";
    cout << endl;

    vector<int> result2 = optimalApproach(num);
    cout << "Optimal Approach: ";
    for (int i: result2) cout << i << " ";
    cout << endl;
    
    return 0;
}
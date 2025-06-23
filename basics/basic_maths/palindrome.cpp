#include<bits/stdc++.h>
using namespace std;

bool palindromCheckUsingLoop(int num) {
    int rev = 0;
    int dup = num;
    while(num != 0) {
        rev = rev * 10 +  num % 10;
        num /= 10;
    }
    if (dup == rev) return true;
    return false;
}

bool palindromCheckUsingRecusrion(int num) {
    return false;
}

int main() {
    int num;
    cin >> num;
    // 123

    bool result1 = palindromCheckUsingLoop(num);
    cout << "Using Loop: " << result1 << endl;

    bool result2 = palindromCheckUsingRecusrion(num);
    cout << "Using Recursion: " << result2 << endl;

    return 0;
}
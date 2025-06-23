#include<bits/stdc++.h>
using namespace std;

int reverseNumberUsingLoop(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 +  num % 10;
        num /= 10;
    }
    return rev;
}

int reverseNumberUsingRecusrion(int num, int next = 0) {
    if (num == 0) return next;
    return reverseNumberUsingRecusrion(num / 10, next * 10 + num % 10);
}

int reverseNumberUsingString(int num) {
    string s = to_string(num);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    int num;
    cin >> num;
    // 123

    int result1 = reverseNumberUsingLoop(num);
    cout << "Using Loop: " << result1 << endl;

    int result2 = reverseNumberUsingRecusrion(num);
    cout << "Using Recursion: " << result2 << endl;

    int result3 = reverseNumberUsingString(num);
    cout << "Using String: " << result3 << endl;

    return 0;
}
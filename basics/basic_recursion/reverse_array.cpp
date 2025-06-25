#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArrayUsingFunction(vector<int> arr) {
    reverse(arr.begin(), arr.end());
    return arr;
}

vector<int> reverseArrayUsingLoop(vector<int> arr) {
    for (int i = 0; i < arr.size() / 2; i++) swap(arr[i], arr[arr.size() - i - 1]);
    return arr;
}

vector<int> reverseArrayUsingRecursion(vector<int> arr, int i = 0) {
    if (i >= arr.size() / 2) return arr;
    swap(arr[i], arr[arr.size() - i - 1]);
    return reverseArrayUsingRecursion(arr, i + 1);
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5 };

    vector<int> result1 = reverseArrayUsingFunction(arr);
    cout << "Using Function: ";
    for (int i: result1) cout << i << " ";
    cout << endl;

    vector<int> result2 = reverseArrayUsingLoop(arr);
    cout << "Using Loop: ";
    for (int i: result2) cout << i << " ";
    cout << endl;

    vector<int> result3 = reverseArrayUsingRecursion(arr);
    cout << "Using Recursion: ";
    for (int i: result3) cout << i << " ";
    cout << endl;

    return 0;
}
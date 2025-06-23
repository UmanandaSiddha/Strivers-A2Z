#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N.
// In the worst case when N is a multiple of 10 the number of digits in N is log10N + 1.

// In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations.
// In each iteration of the while loop we perform constant time operations like division and increment the counter.
// Space Complexity : O(1) as only a constant amount of additional memory for the counter regardless of size of the input number.

int countDigitsUsingLoop(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int countDigitsUsingRecursion(int num) {
    int count = 0;
    if (num == 0) {
        return count;
    }
    count++;
    return count + countDigitsUsingRecursion(num / 10);
}

// Time Complexity: O(1)
int countDigitsOptimalApproach(int num) {
    return (int)(log10(num)+1);
}

int main() {
    int num;
    cin >> num;
    // 123

    int result1 = countDigitsUsingLoop(num);
    cout << result1 << endl;

    int result2 = countDigitsUsingRecursion(num);
    cout << result2 << endl;

    int result3 = countDigitsOptimalApproach(num);
    cout << result3 << endl;

    return 0;
}


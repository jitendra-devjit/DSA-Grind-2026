#include <iostream>
using namespace std;

bool isPalindrome(int n) {

    int original = n;
    int reversed = 0;

    while (n > 0) {

        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;

    }

    return original == reversed;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}
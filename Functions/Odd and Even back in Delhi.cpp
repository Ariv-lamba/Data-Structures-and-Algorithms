#include <iostream>
using namespace std;

// Function to check if a car number is allowed on Sunday
bool isAllowed(int num) {
    int oddSum = 0, evenSum = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        num /= 10;
    }

    // Check the condition
    return (evenSum % 4 == 0 || oddSum % 3 == 0);
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        int carNum;
        cin >> carNum;

        if (isAllowed(carNum)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

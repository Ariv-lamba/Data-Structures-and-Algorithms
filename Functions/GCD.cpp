#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    cout << gcd(N1, N2) << endl;

    return 0;
}

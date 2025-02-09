#include <iostream>
using namespace std;

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int y, w;
    cin >> y >> w;
    
    // Determine the maximum roll needed
    int max_roll = max(y, w);
    
    // Calculate the number of favorable outcomes
    int favorable_outcomes = 6 - max_roll + 1;
    
    // Simplify the fraction
    int divisor = gcd(favorable_outcomes, 6);
    cout << favorable_outcomes / divisor << "/" << 6 / divisor << endl;
    
    return 0;
}

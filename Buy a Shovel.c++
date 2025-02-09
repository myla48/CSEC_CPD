#include <iostream>
using namespace std;
 
int main() {
    int k, r;
    cin >> k;
    cin >> r;
 
    int n = 1;
    while (true) {
        int total_cost = n * k;
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << n;
            break;
        }
        n++;
    }
    return 0;
}

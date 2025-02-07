#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int moves = 0;
    char current = 'a';
 
    for (char ch : s) {
        int diff = abs(ch - current);
        moves += min(diff, 26 - diff);
        current = ch;
    }
 
    cout << moves << endl;
    return 0;
}

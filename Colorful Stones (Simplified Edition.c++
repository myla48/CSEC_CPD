#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    int position = 0;
    
    for (char instruction : t) {
        if (instruction == s[position]) {
            position++;
            if (position == s.length()) {
                break; 
            }
        }
    }

    cout << position + 1 << endl;
    return 0;
}

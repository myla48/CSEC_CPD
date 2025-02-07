#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string word;
    cin >> word;
    
    int lower = 0, upper = 0;
    for (char c : word) {
        if (islower(c)) {
            lower++;
        } else {
            upper++;
        }
    }
 
    if (upper > lower) {
        for (char &c : word) {
            c = toupper(c);
        }
    } else {
        for (char &c : word) {
            c = tolower(c);
        }
    }
 
    cout << word << endl;
    return 0;
}

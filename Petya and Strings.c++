#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string str1, str2;
    cin >> str1 >> str2;
    
    // Make both strings lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    // Compare the strings and print the result
    if (str1 < str2) {
        cout << -1 << endl;
    } else if (str1 > str2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}

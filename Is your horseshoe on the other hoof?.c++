#include <iostream>
#include <set>
using namespace std;
 
int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    // Use a set to store unique colors
    set<int> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);
    
    // Calculate the number of horseshoes Valera needs to buy
    int count = 4 - colors.size();
    
    cout << count << endl;
    return 0;
}

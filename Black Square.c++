#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    vector<int> calorie(5);
    calorie[1] = a;
    calorie[2] = b;
    calorie[3] = c;
    calorie[4] = d;
 
    string game;
    cin >> game;
 
    int total_calories = 0;
    for (char ch : game) {
        total_calories += calorie[ch - '0'];
    }
 
    cout << total_calories << endl;
    return 0;
}
 

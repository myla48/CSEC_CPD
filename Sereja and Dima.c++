#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
 
    int sereja_points = 0, dima_points = 0;
    int left = 0, right = n - 1;
    bool is_sereja_turn = true;
 
    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (is_sereja_turn) {
                sereja_points += cards[left];
            } else {
                dima_points += cards[left];
            }
            ++left;
        } else {
            if (is_sereja_turn) {
                sereja_points += cards[right];
            } else {
                dima_points += cards[right];
            }
            --right;
        }
        is_sereja_turn = !is_sereja_turn;
    }
 
    cout << sereja_points << " " << dima_points << endl;
    return 0;
}

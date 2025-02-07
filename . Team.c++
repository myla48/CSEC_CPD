#include <iostream>
using namespace std;
 
int main() {
    int numberOfPuzzles, surePetya, sureVasya, sureTonya, puzzlesToSolve = 0;
    cin >> numberOfPuzzles;
 
    for (int i = 0; i < numberOfPuzzles; ++i) {
        cin >> surePetya >> sureVasya >> sureTonya;
        if (surePetya + sureVasya + sureTonya >= 2) {
            puzzlesToSolve++;
        }
    }
 
    cout << puzzlesToSolve << endl;
    return 0;
}

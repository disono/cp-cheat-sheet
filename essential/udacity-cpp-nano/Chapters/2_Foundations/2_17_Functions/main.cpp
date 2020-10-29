#include <iostream>
#include <vector>

using namespace std;

// create a function
void PrintBoard(const vector<vector<int>>& v) {
    for (auto& r : v) {
        for (int d : r) {
            cout << d << ", ";
        }

        cout << endl;
    }
}

int main() {
    vector<vector<int>> board = {
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 0}
    };

    // display board
    PrintBoard(board);

    return 0;
}

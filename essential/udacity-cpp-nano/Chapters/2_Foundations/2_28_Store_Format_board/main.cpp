#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

enum class State {
    kEmpty,
    kObstacle
};

// TODO: Change the return type to use auto or
// explicitly indicate vector<State>
vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;

    // TODO: Change the variable type for row
    // to be a vector<State>
    vector<State> row;
    while (sline >> n >> c && c == ',') {
        // TODO: Modify the line below to push_back
        // a State::kEmpty if n is 0, and push_back
        // a State::kObstacle otherwise.
        row.push_back(n == 0 ? State::kEmpty : State::kObstacle);
    }

    return row;
}

// TODO: Modify the return type here as well. Just
// as above, the board will contain State objects
// instead of ints.
vector<vector<State>> ReadBoardFile(const string &path) {
    vector<vector<State>> board{};
    ifstream myfile(path);

    // TODO: Modify the board declaration to store
    // State objects instead of ints.
    if (myfile) {
        string line;

        while (getline(myfile, line)) {
            // TODO: Modify the row type to use State
            // objects instead of ints.
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }

    return board;
}

// TODO: Modify the function signature below to accept
// cells with State type instead of int type.
string CellString(State cell) {
    switch (cell) {
        case State::kObstacle:
            return "⛰️";
        default:
            return "0 ";
    }
}

void PrintBoard(const vector<vector<State>> &board) {
    for (const auto &v : board) {
        for (auto i : v) {
            // TODO: Modify the line below to call CellString
            // on each element of the board before streaming to cout.
            cout << CellString(i);
        }

        cout << "\n";
    }
}

int main() {
    auto board = ReadBoardFile("./board.txt");
    PrintBoard(board);

    return 0;
}
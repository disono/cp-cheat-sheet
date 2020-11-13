#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::abs;
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class State {
    kEmpty,
    kObstacle,
    kClosed
};

vector<State> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<State> row;

    while (sline >> n >> c && c == ',') {
        if (n == 0) {
            row.push_back(State::kEmpty);
        } else {
            row.push_back(State::kObstacle);
        }
    }

    return row;
}

vector<vector<State>> ReadBoardFile(string path) {
    ifstream myfile(path);
    vector<vector<State>> board{};

    if (myfile) {
        string line;
        while (getline(myfile, line)) {
            vector<State> row = ParseLine(line);
            board.push_back(row);
        }
    }

    return board;
}

// TODO: Write the Search function stub here.

string CellString(State cell) {
    switch (cell) {
        case State::kObstacle:
            return "⛰️   ";
        default:
            return "0   ";
    }
}

void PrintBoard(const vector<vector<State>> board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << CellString(board[i][j]);
        }

        cout << "\n";
    }
}

std::vector<std::vector<State>> Search(std::vector<std::vector<State>> board, int init[2], int goal[2]) {
    std::vector<std::vector<State>> path{};
    std::cout << "No path found! \n";
    return path;
}

// TODO: Write the Heuristic function here.

/**
 * Implementation of A* search algorithm
 */
int Heuristic(int x1, int y1, int x2, int y2) {
    return (abs(x2 - x1) + abs(y2 - y1));
}

// TODO: Write the AddToOpen function here.
void addToOpen(int x, int y, int g, int h, vector<vector<int>> &openNode, vector<vector<State>> &grid) {
    vector<int> node{x, y, g, h};
    openNode.push_back(node);
    grid[x][y] = State::kClosed;
}

int main() {
    // TODO: Declare "init" and "goal" arrays with values {0, 0} and {4, 5} respectively.
    int init[2]{0, 0}, goal[2]{4, 5};
    auto board = ReadBoardFile("/mnt/Works/github.com/cpp-cheat-sheet/essential/board.txt");

    // TODO: Call Search with "board", "init", and "goal". Store the results in the variable "solution".
    std::vector<std::vector<State>> solution = Search(board, init, goal);

    // TODO: Change the following line to pass "solution" to PrintBoard.
    PrintBoard(solution);
}

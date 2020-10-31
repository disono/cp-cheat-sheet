#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

vector<int> ParseLine(string line) {
    istringstream aStream(line);
    int n;
    char c;
    vector<int> row;

    while (aStream >> n >> c) {
        row.push_back(n);
    }

    return row;
}

vector<vector<int>> ReadBoardFile(string filePath) {
    string value;
    ifstream boardFile;
    boardFile.open(filePath);
    string content;
    vector<vector<int>> vt(5);
    int i = 0;

    if (!boardFile.fail()) {
        while (boardFile >> content) {
            vt[i] = ParseLine(content);
            i++;
        }
    } else {
        cout << "Unable to open file.";
    }

    boardFile.close();

    return vt;
}

void printBoard(const vector<vector<int>>& vt) {
    for (const auto& r : vt) {
        for (auto v : r) {
            cout << v << ", ";
        }

        cout << endl;
    }
}

int main() {
    printBoard(ReadBoardFile("board.txt"));
    return 0;
}

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

enum boardType {zero = 0, one = 1};

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
            if (boardType::one == v) {
                cout << "⛰" << " ";
            } else {
                cout << v << " ";
            }
        }

        cout << endl;
    }
}

int main() {
    cout << "1) Enums" << endl;
    enum season { spring = 3, summer = 4, autumn = 8, winter = 12 };
    cout << season::autumn << endl;

    cout << "2) Demo enums";
    enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
    enum week day;
    day = Wed;
    printf("%d", day);

    cout << "2) Poop" << endl;
    printBoard(ReadBoardFile("/mnt/Works/github.com/cpp-cheat-sheet/essential/board.txt"));
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

void ReadFile(string filePath) {
    ifstream boardFile;
    boardFile.open(filePath);
    string content;
    if (!boardFile.fail()) {
        while (boardFile >> content) {
            cout << content << endl;
        }
    } else {
        cout << "Unable to open file.";
    }
    boardFile.close();
}

void otherWay(string path) {
    ifstream boardFile(path);
    string content;
    if (boardFile) {
        while (getline(boardFile, content)) {
            cout << content << endl;
        }
    }
}

int main() {
    otherWay("board.txt");

    return 0;
}

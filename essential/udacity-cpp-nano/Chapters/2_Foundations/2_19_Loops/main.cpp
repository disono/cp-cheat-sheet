#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "1) For Loop";
    for (int i = 0; i < 100; i++) {
        cout << i << ", ";
    }
    cout << endl;

    vector<int> vec = {1, 2, 3};
    for (auto& v : vec) {
        cout << v << ", ";
    }
    cout << endl;

    cout << "2) While Loop";
    bool isDone = false;
    while (!isDone) {
        for (int i = 0; i < 100; i++) {
            cout << "Num: " << i << ", ";
            if (i == 50) {
                isDone = true;
                cout << "Halt while loop" << endl;
            }
        }
    }
    cout << endl;

    cout << "3) Do While Loop";
    isDone = false;
    do {
        for (int i = 0; i < 100; i++) {
            cout << "Num: " << i << ", ";
            if (i == 50) {
                isDone = true;
                cout << "Halt while loop" << endl;
            }
        }
    } while (!isDone);
    cout << endl;

    // examples
    cout << "4) Examples";
    int sum = 0;
    int num = 0;
    cout << "Enter a number: " << endl;
    cin >> num;
    while (num > 0) {
        sum += num;

        cout << "Enter a number: " << endl;
        cin >> num;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}

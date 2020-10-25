#include <iostream>
#include <vector>

using namespace std;

int main() {
    // simple vector
    cout << "Simple Vector" << endl;
    vector<int> a = {0, 1, 2, 3, 4};
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    cout << endl;

    // 2d vector
    // vector of vector
    cout << "2D Vector" << endl;
    vector<vector<int>> vt{
            {1, 2},
            {3, 4, 5, 6}
    };

    for (int i = 0; i < vt.size(); i++) {
        for (int j = 0; j < vt[i].size(); j++) {
            cout << vt[i][j] << ", ";
        }

        cout << endl;
    }

    // row & column
    // define how many rows the 2d vector is going to have
    cout << "Create a 2D Vector" << endl;
    int row = 5;

    // define the number of values each row to have
    int column[] = {5, 10, 15, 20, 25};

    // create a vector of vector with size equal to row
    vector<vector<int>> vec(row);

    // now assign structure of 2d vector by assigning the value
    // of rows and columns through a nested for loop
    for (int i = 0; i < row; i++) {
        // declare the size of the column
        int col = column[i];

        // define each value in row
        vec[i] = vector<int>(col);
        for (int j = 0; j < col; j++) {
            vec[i][j] = j + 1;
        }
    }

    // now print the 2d vector created above
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << ", ";
        }

        cout << endl;
    }

    return 0;
}

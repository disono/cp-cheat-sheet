#include <iostream>
#include <vector>

using namespace std;

int main() {
    /**
     * Vectors are same as dynamic arrays with the ability to resize itself automatically
     * when an element is inserted or deleted, with their storage being handled automatically
     * by the container. Vector elements are placed in contiguous storage so that they can
     * be accessed and traversed using iterators. In vectors, data is inserted at the end.
     * Inserting at the end takes differential time, as sometimes there may be a need of
     * extending the array. Removing the last element takes only constant time because
     * no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
     */
    // simple vector
    cout << "1) Simple Vector" << endl;
    vector<int> a = {0, 1, 2, 3, 4};
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    cout << endl;

    // 2d vector
    // vector of vector
    cout << "2) 2D Vector" << endl;
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
    cout << "3) Create a 2D Vector" << endl;
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

    // another approach
    cout << "4) Create a 2d vector contain 'n' elements each each having the value of 'vector<in> (m, 0)'" << endl;
    int n = 3; // row
    int m = 4; // column
    vector<vector<int>> vecMN(n, vector<int> (m, 0)); // with default value 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << vecMN[i][j] << ", ";
        }

        cout << endl;
    }

    // another approach without default value
    cout << "5) Create a 2d without default value" << endl;
    int aRow = 5;
    int bCol = 10;
    vector<vector<int>> vRC(aRow, vector<int> (bCol));

    for (int i = 0; i < aRow; i++) {
        for (int j = 0; j < bCol; j++) {
            vRC[i][j] = j + 1;
        }
    }

    for (int i = 0; i < aRow; i++) {
        for (int j = 0; j < bCol; j++) {
            cout << vRC[i][j] << ", ";
        }

        cout << endl;
    }

    // range
    cout << "6) Range for loop" << endl;
    vector<vector<int>> vR = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}
    };
    for (const auto& r : vR) {
        for (auto v : r) {
            cout << v << ", ";
        }

        cout << endl;
    }

    return 0;
}

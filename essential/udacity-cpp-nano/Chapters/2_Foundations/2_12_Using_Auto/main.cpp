#include <iostream>

/**
 * When initializing a variable, the auto keyword can be used in place of the type to tell the
 * compiler to infer the variable’s type from the initializer’s type. This is called type
 * inference (also sometimes called type deduction).
 */

using namespace std;

int add(int x, int y) {
    return x + y;
}

auto sub(int x, int y) -> double {
    return x - y;
}

int main() {
    auto i = 0;
    cout << i << endl;

    auto d{1.02};
    cout << d << endl;

    auto sum{add(1, 2)};
    cout << sum << endl;

    cout << sub(1, 2) << endl;

    return 0;
}
